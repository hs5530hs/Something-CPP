CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

project(LearnC++ C CXX)

# Default build is in Release mode
if (NOT CMAKE_BUILD_TYPE AND NOT MSVC)
  set(CMAKE_BUILD_TYPE "Release")
endif (NOT CMAKE_BUILD_TYPE AND NOT MSVC)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED yes)

add_subdirectory(thread)