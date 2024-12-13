# Install script for directory: /Users/guanhao/VSCodeAlgorithmTrain/Qt/untitled1

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
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/guanhao/VSCodeAlgorithmTrain/Qt/untitled1/build/Debug/untitled1.app" USE_SOURCE_PERMISSIONS)
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/guanhao/Qt/6.8.0/macos/lib"
        -add_rpath "@executable_path/../Frameworks"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1")
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/guanhao/VSCodeAlgorithmTrain/Qt/untitled1/build/Release/untitled1.app" USE_SOURCE_PERMISSIONS)
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/guanhao/Qt/6.8.0/macos/lib"
        -add_rpath "@executable_path/../Frameworks"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1")
    endif()
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/guanhao/VSCodeAlgorithmTrain/Qt/untitled1/build/RelWithDebInfo/untitled1.app" USE_SOURCE_PERMISSIONS)
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/guanhao/Qt/6.8.0/macos/lib"
        -add_rpath "@executable_path/../Frameworks"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./untitled1.app/Contents/MacOS/untitled1")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/guanhao/VSCodeAlgorithmTrain/Qt/untitled1/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
