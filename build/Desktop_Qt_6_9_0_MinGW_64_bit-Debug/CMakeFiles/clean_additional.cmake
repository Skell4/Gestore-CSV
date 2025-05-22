# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GestoreCSV_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GestoreCSV_autogen.dir\\ParseCache.txt"
  "GestoreCSV_autogen"
  )
endif()
