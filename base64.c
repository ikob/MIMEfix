/*
 *  base64.c
 *  MIMEfix
 *
 *  Created by Kobayashi Katsushi on 06/02/24.
 *  Copyright 2006 Katsushi Kobayashi. All rights reserved.
 *
 * $Id: base64.c,v 1.1.1.1 2006-06-20 05:55:37 ikob Exp $
 */

#include "base64.h"
#include "string.h"


int decodeB64(const char *src, char *dst, int max)
{
	char table[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
					-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
					-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63,
					52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1,
					-1,  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14,
					15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1,
					-1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
					41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1 };

	int isrc = 0, idst = 0;
	memset(dst, 0, max);
	while(src[isrc] != 0 && (isrc + 4) < max){
		if(table[src[isrc]] < 0) return idst;
		dst[idst] = table[src[isrc]] << 2;

		if(table[src[isrc + 1]] < 0) return (idst + 1);
		dst[idst] |= table[src[isrc + 1]] >> 4;
		dst[idst + 1] = table[src[isrc + 1]] << 4;

		if(src[isrc + 2] == '=') return (idst + 2);
		if(table[src[isrc + 2]] < 0) return (idst + 1);
		dst[idst + 1] |= table[src[isrc + 2]] >> 2;
		dst[idst + 2] = table[src[isrc + 2]] << 6;

		if(src[isrc + 3] == '='){
			return (idst + 2);
		}
		if(table[src[isrc + 3]] < 0) return (idst + 3);
		dst[idst + 2] |= table[src[isrc + 3]];

		idst += 3; isrc += 4;
	}
	return idst;
}

