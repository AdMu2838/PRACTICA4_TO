# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Resuelto3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Resuelto3_autogen.dir\\ParseCache.txt"
  "Resuelto3_autogen"
  )
endif()
