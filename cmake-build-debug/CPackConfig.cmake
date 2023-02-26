# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/media/nybsysml/New Volume/Niloy/Neloy_mumble;/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENTS_ALL "Unspecified;mumble_client")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/snap/clion/222/bin/cmake/linux/x64/share/cmake-3.24/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "Mumble built using CMake")
set(CPACK_GENERATOR "TGZ")
set(CPACK_INSTALL_CMAKE_PROJECTS "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug;Mumble;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake;/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake/FindModules;/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/FindPythonInterpreter;/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/opus/cmake")
set(CPACK_NSIS_DISPLAY_NAME "Mumble 1.5.0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "Mumble 1.5.0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/snap/clion/222/bin/cmake/linux/x64/share/cmake-3.24/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Open source, low-latency, high quality voice chat.")
set(CPACK_PACKAGE_FILE_NAME "Mumble-1.5.0-Linux")
set(CPACK_PACKAGE_HOMEPAGE_URL "https://www.mumble.info")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "Mumble 1.5.0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "Mumble 1.5.0")
set(CPACK_PACKAGE_NAME "Mumble")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "1.5.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "5")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_RESOURCE_FILE_LICENSE "/snap/clion/222/bin/cmake/linux/x64/share/cmake-3.24/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/snap/clion/222/bin/cmake/linux/x64/share/cmake-3.24/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/snap/clion/222/bin/cmake/linux/x64/share/cmake-3.24/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
