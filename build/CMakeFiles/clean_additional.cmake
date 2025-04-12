# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MDQT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MDQT_autogen.dir\\ParseCache.txt"
  "MDQT_autogen"
  )
endif()
