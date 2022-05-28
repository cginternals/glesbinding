ARG BASE=cginternals/gpu-base
ARG BASE_DEV=cginternals/gpu-base:dev
ARG PROJECT_NAME=glesbinding
ARG CPPLOCATE_DEPENDENCY=cginternals/cpplocate:latest

# DEPENDENCIES

FROM $CPPLOCATE_DEPENDENCY AS cpplocate

# BUILD

FROM $BASE_DEV as build

ARG PROJECT_NAME
ARG COMPILER_FLAGS="-j 4"
ARG GRAPHICS_DRIVER

RUN apt install -y --no-install-recommends libgles-dev

COPY --from=cpplocate $WORKSPACE/cpplocate $WORKSPACE/cpplocate

ENV glesbinding_DIR="$WORKSPACE/$PROJECT_NAME"

WORKDIR $WORKSPACE/$PROJECT_NAME

ADD cmake cmake
ADD data data
ADD deploy deploy
ADD docs docs
ADD source source
ADD CMakeLists.txt CMakeLists.txt
ADD configure configure
ADD $PROJECT_NAME-config.cmake $PROJECT_NAME-config.cmake
ADD LICENSE LICENSE
ADD README.md README.md
ADD AUTHORS AUTHORS

RUN ./configure
RUN CMAKE_OPTIONS="-DOPTION_BUILD_TESTS=Off" ./configure
RUN cmake --build build -- $COMPILER_FLAGS

# INSTALL

FROM build as install

ARG PROJECT_NAME

WORKDIR $WORKSPACE/$PROJECT_NAME

RUN CMAKE_OPTIONS="-DCMAKE_INSTALL_PREFIX=$WORKSPACE/$PROJECT_NAME-install" ./configure
RUN cmake --build build --target install

# DEPLOY

FROM $BASE AS deploy

ARG PROJECT_NAME

COPY --from=build $WORKSPACE/cpplocate $WORKSPACE/cpplocate

COPY --from=install $WORKSPACE/$PROJECT_NAME-install $WORKSPACE/$PROJECT_NAME

ENV LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$WORKSPACE/cpplocate/lib
ENV LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$WORKSPACE/$PROJECT_NAME/lib
