# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "src/CMakeFiles/shared_autogen.dir/AutogenUsed.txt"
  "src/CMakeFiles/shared_autogen.dir/ParseCache.txt"
  "src/mumble/CMakeFiles/mumble_autogen.dir/AutogenUsed.txt"
  "src/mumble/CMakeFiles/mumble_autogen.dir/ParseCache.txt"
  "src/mumble/CMakeFiles/mumble_client_object_lib_autogen.dir/AutogenUsed.txt"
  "src/mumble/CMakeFiles/mumble_client_object_lib_autogen.dir/ParseCache.txt"
  "src/mumble/mumble_autogen"
  "src/mumble/mumble_client_object_lib_autogen"
  "src/murmur/CMakeFiles/mumble-server_autogen.dir/AutogenUsed.txt"
  "src/murmur/CMakeFiles/mumble-server_autogen.dir/ParseCache.txt"
  "src/murmur/mumble-server_autogen"
  "src/shared_autogen"
  )
endif()
