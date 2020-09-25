/*
 * Copyright (C) 2015 Michael Müller
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "config.h"
#include "wine/port.h"

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"
#include "wine/library.h"


extern void * __stdcall wine_dlsym(void *handle, const char *symbol);
extern int __stdcall wine_dlclose(void *handle);
extern char * __stdcall wine_dlerror(void);
extern void * __stdcall wine_dlopen(const char *filename, int flag);

extern void * __stdcall wine_dlsym(void *handle, const char *symbol) {
	return dlsym(handle, symbol);
}

extern int __stdcall wine_dlclose(void *handle) {
	return dlclose(handle);
}

extern char * __stdcall wine_dlerror(void) {
	return dlerror();
}

extern void * __stdcall wine_dlopen(const char *filename, int flag) {
	return dlopen(filename, flag);
}

