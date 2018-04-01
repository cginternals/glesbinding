
# Check if tools are enabled
if(NOT OPTION_BUILD_TOOLS)
    return()
endif()


# Tools
add_subdirectory("glescontexts")
add_subdirectory("glesfunctions")
add_subdirectory("glesinfo")
add_subdirectory("glesmeta")
add_subdirectory("glesqueries")
