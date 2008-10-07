// vim:expandtab:autoindent:tabstop=4:shiftwidth=4:filetype=c:
/*
 * Copyright (C) 2005 Dell Inc.
 *  by Michael Brown <Michael_E_Brown@dell.com>
 * Licensed under the Open Software License version 2.1
 *
 * Alternatively, you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.

 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 */

#ifndef C_SYSINFO_H
#define C_SYSINFO_H

#ifndef dprintf
#if defined(DEBUG_SYSINFO_C)
#   include <stdio.h>
#   define dprintf(format, args...) do { fprintf(stderr , format , ## args);  } while(0)
#else
#   define dprintf(format, args...) do {} while(0)
#endif
#endif

#define __internal __attribute__((visibility("internal")))

__internal char * smbios_struct_get_string_from_table(u8 type, u8 offset);
void __internal strip_trailing_whitespace( char *str );

#endif
