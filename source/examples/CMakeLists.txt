
# Check if examples are enabled
if(NOT OPTION_BUILD_EXAMPLES)
    return()
endif()


# 
# Configuration for all sub-projects
# 

# External packages
find_package(cpplocate)

if (NOT cpplocate_FOUND)
    message("Examples skipped: cpplocate not found")
    return()
endif()


# 
# Sub-projects
# 

# Examples
add_subdirectory("cubescape-gl")
add_subdirectory("cubescape-gles")
