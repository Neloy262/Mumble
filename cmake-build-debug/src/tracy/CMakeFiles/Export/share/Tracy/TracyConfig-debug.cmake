#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "TracyClient" for configuration "Debug"
set_property(TARGET TracyClient APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TracyClient PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libTracyClient.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS TracyClient )
list(APPEND _IMPORT_CHECK_FILES_FOR_TracyClient "${_IMPORT_PREFIX}/lib/libTracyClient.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
