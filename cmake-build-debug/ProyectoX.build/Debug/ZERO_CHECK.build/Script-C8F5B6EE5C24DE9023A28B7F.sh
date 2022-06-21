#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/user1/Desktop/Rentals/cmake-build-debug
  make -f /Users/user1/Desktop/Rentals/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/user1/Desktop/Rentals/cmake-build-debug
  make -f /Users/user1/Desktop/Rentals/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/user1/Desktop/Rentals/cmake-build-debug
  make -f /Users/user1/Desktop/Rentals/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/user1/Desktop/Rentals/cmake-build-debug
  make -f /Users/user1/Desktop/Rentals/cmake-build-debug/CMakeScripts/ReRunCMake.make
fi

