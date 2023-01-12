# Install script for directory: /media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/auxiliary_files/info.mumble.Mumble.appdata.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/auxiliary_files/info.mumble.Mumble.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/man_files/mumble.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/auxiliary_files/mumble-overlay")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/man_files/mumble-overlay.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/man_files/mumble-server.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdocx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/man_files/mumble-server-user-wrapper.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_serverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/mumble" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/mumble-server.ini")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_serverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/sysconfig.d" TYPE FILE RENAME "mumble-server.conf" FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/config_files/mumble-server.sysusers")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_serverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/systemd/system" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/auxiliary_files/mumble-server.service")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_serverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/cmake-build-debug/auxiliary_files/mumble-server-user-wrapper")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_serverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/system.d" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/auxiliary_files/config_files/mumble-server.conf")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_serverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/mumble" TYPE FILE FILES "/media/nybsysml/New Volume/Niloy/Neloy_mumble/src/murmur/MumbleServer.ice")
endif()

