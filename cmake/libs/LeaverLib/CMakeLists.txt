CMAKE_MINIMUM_REQUIRED (VERSION 3.8)

project(leaver_lib)

set(LEAVER_DLL Leaver.cpp Leaver.h)

add_library(leaver_dll SHARED ${EAVER_DLL})