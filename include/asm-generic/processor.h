/*
 * include/asm-generic/processor.h
 *
 * Copyright (c) 2014 NVIDIA Corporation. All rights reserved.
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _ASM_GENERIC_PROCESSOR_H_
#define _ASM_GENERIC_PROCESSOR_H_

<<<<<<< HEAD
<<<<<<< HEAD
#include <asm-generic/relaxed.h>
=======
#ifndef cpu_relaxed_read
#define cpu_relaxed_read(p) (*(p))
#endif

#ifndef cpu_relaxed_read_long
#define cpu_relaxed_read_long(p) (*(p))
#endif
>>>>>>> b4ac044... asm-generic: processor.h: adding new header file
=======
#include <asm-generic/relaxed.h>
>>>>>>> 31be1c0... asm-generic: processor.h: remove redundant macros

#ifndef cpu_read_relax
#define cpu_read_relax() cpu_relax()
#endif

#endif /*_ASM_GENERIC_PROCESSOR_H_*/
