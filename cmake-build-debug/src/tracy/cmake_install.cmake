# Install script for directory: /media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/src/tracy/libTracyClient.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyC.h"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/Tracy.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyD3D11.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyD3D12.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyLua.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyOpenCL.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyOpenGL.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/TracyVulkan.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/client" TYPE FILE FILES
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/tracy_concurrentqueue.h"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/tracy_rpmalloc.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/tracy_SPSCQueue.h"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyArmCpuTable.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyCallstack.h"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyCallstack.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyDebug.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyDxt1.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyFastVector.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyLock.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyProfiler.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyRingBuffer.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyScoped.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyStringHelpers.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracySysTime.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracySysTrace.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/client/TracyThread.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/common" TYPE FILE FILES
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/tracy_lz4.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/tracy_lz4hc.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyAlign.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyAlign.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyAlloc.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyApi.h"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyColor.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyForceInline.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyMutex.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyProtocol.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyQueue.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracySocket.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyStackFrames.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracySystem.hpp"
    "/media/nybsysml/New Volume/Niloy/Neloy_mumble/3rdparty/tracy/common/TracyYield.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake"
         "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/src/tracy/CMakeFiles/Export/7430802ac276f58e70c46cf34d169c6f/TracyConfig.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/src/tracy/CMakeFiles/Export/7430802ac276f58e70c46cf34d169c6f/TracyConfig.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/src/tracy/CMakeFiles/Export/7430802ac276f58e70c46cf34d169c6f/TracyConfig-debug.cmake")
  endif()
endif()

