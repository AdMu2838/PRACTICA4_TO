# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Resuelto4_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Resuelto4_autogen.dir\\ParseCache.txt"
  "Resuelto4_autogen"
  )
endif()