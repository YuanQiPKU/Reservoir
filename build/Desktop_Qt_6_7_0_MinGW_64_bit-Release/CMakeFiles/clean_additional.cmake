# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\my_ui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\my_ui_autogen.dir\\ParseCache.txt"
  "my_ui_autogen"
  )
endif()
