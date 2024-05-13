# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Reservoir_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Reservoir_autogen.dir\\ParseCache.txt"
  "Reservoir_autogen"
  )
endif()
