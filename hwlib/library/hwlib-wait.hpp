// ==========================================================================
//
// File      : hwlib-wait.hpp
// Part of   : C++ hwlib library for close-to-the-hardware OO programming
// Copyright : wouter@voti.nl 2017
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

// this file contains Doxygen lines
/// @file

#ifndef HWLIB_WAIT_H
#define HWLIB_WAIT_H

#include <stdint.h>

namespace hwlib {

/// \brief
/// delay n nanoseconds
/// \details
/// A call of this function will take (at least) n nanoseconds.
/// The value of n must be in the range 0 to 999999999 (up to 1 second).
/// For longer delays the function wait_ms() can be used.
///
/// Note that there is no guaranteed upper bound on the delay time.
void wait_ns( int_fast32_t n );

/// \brief
/// delay n microseconds.
/// \details
/// A call of this function will take (at least) n microseconds.
/// The value of n must be in the range 0 to 999999 (up to 1 second).
/// For longer delays the function wait_ms() can be used.
///
/// Note that there is no guaranteed upper bound on the delay time.
void wait_us( int_fast32_t n );

/// \brief
/// delay n milliseconds.
/// \details
/// A call of this function will take (at least) n milliseconds.
///
/// Note that there is no guaranteed upper bound on the delay time.
void wait_ms( int_fast32_t n );

/// \brief
/// current time in microseconds.
/// \details
/// A call of this function returns the number of microseconds since
/// some arbitrary moment (in most cases the first call to this function).
uint_fast64_t now_us();

}; // namespace hwlib

#endif // HWLIB_WAIT_H
