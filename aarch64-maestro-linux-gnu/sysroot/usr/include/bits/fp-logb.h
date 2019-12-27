/* Define __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.
   Copyright (C) 2016-2019 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/fp-logb.h> directly; include <math.h> instead."
#endif

/* __FP_LOGB0_IS_MIN is defined to 1 if FP_ILOGB0 is INT_MIN, and 0 if
   it is -INT_MAX.  __FP_LOGBNAN_IS_MIN is defined to 1 if FP_ILOGBNAN
   is INT_MIN, and 0 if it is INT_MAX.  */

#define __FP_LOGB0_IS_MIN	0
#define __FP_LOGBNAN_IS_MIN	0
