///////////////////////////////////////////////////////////////////////////////
// StdUtils plug-in for NSIS
// Copyright (C) 2004-2011 LoRd_MuldeR <MuldeR2@GMX.de>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// http://www.gnu.org/licenses/gpl-2.0.txt
///////////////////////////////////////////////////////////////////////////////

wchar_t *ansi_to_utf16(const char *input);
wchar_t *utf8_to_utf16(const char *input);

#ifdef UNICODE
	#define STRLEN wcslen	
	#define STRICMP _wcsicmp
	#define STRNCPY wcsncpy
	#define STRCHR wcschr
	#define T(X) L##X
#else
	#define STRLEN strlen
	#define STRICMP _stricmp
	#define STRNCPY strncpy
	#define STRCHR strchr
	#define T(X) X
#endif