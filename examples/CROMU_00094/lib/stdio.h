/*

Copyright (c) 2015 Cromulence LLC

Authors: Cromulence <cgc@cromulence.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/
#ifndef __STDIO_H__
#define __STDIO_H__

#include <libcgc.h>
#include <stdarg.h>

int putchar( int c );

int printf( const char *format, ... );
int vprintf( const char *format, va_list args );
int sprintf( char *buf, const char *format, ... );
int vsprintf( char *buf, const char *format, va_list args );
int puts( const char *s );

// Receive length number of bytes into buffer
// Returns number of bytes read or -1 for error. 
int ReceiveBytes(char *buffer, int length);

// Sends length bytes from buffer. 
// Returns number of bytes sent or -1 for error. 
int SendBytes(char *buffer, int length);
 
// Receives bytes from STDIN until delim is found. 
// Returns num bytes in buffer (not including null)
// buffer will be null terminated and not contain delim 
int ReceiveUntil(char *buffer, int length, char delim);


#endif // __STDIO_H__
