/**
 * this file is part of llvm-qbc
 */

/*
    memory support for internal data struct

    Copyright (C) 2012  microcai <microcai@fedoraproject.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 3 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <stdlib.h>

void * brt_operator_new(size_t );
void brt_ooperator_delete(void*);

void* brt_operator_new(size_t __size)
{
	return malloc(__size);
}

void brt_ooperator_delete(void* __ptr)
{
	free(__ptr);
}

