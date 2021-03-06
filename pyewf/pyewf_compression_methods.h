/*
 * Python object definition of the libewf compresson methods
 *
 * Copyright (C) 2008-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYEWF_COMPRESSION_METHODS_H )
#define _PYEWF_COMPRESSION_METHODS_H

#include <common.h>
#include <types.h>

#include "pyewf_libewf.h"
#include "pyewf_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pyewf_compression_methods pyewf_compression_methods_t;

struct pyewf_compression_methods
{
	/* Python object initialization
	 */
	PyObject_HEAD
};

extern PyTypeObject pyewf_compression_methods_type_object;

int pyewf_compression_methods_init_type(
     PyTypeObject *type_object );

PyObject *pyewf_compression_methods_new(
           void );

int pyewf_compression_methods_init(
     pyewf_compression_methods_t *pyewf_compression_methods );

void pyewf_compression_methods_free(
      pyewf_compression_methods_t *pyewf_compression_methods );

#if defined( __cplusplus )
}
#endif

#endif

