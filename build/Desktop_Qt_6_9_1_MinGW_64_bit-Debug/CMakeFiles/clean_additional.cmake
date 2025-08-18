# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\PianoApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PianoApp_autogen.dir\\ParseCache.txt"
  "PianoApp_autogen"
  )
endif()
