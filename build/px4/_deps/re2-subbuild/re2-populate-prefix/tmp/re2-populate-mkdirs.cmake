# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/app/build/px4/_deps/re2-src"
  "/app/build/px4/_deps/re2-build"
  "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix"
  "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix/tmp"
  "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix/src/re2-populate-stamp"
  "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix/src"
  "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix/src/re2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix/src/re2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/app/build/px4/_deps/re2-subbuild/re2-populate-prefix/src/re2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
