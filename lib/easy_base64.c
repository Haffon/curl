/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2017, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at https://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/


 /* Base64 encoding/decoding */

#include "curl_setup.h"
#include "urldata.h" /* for the Curl_easy definition */
#include "warnless.h"
#include "curl_base64.h"
#include "non-ascii.h"

 /* The last 3 #include files should be in this order */
#include "curl_printf.h"
#include "curl_memory.h"
#include "memdebug.h"

CURLcode curl_easy_base64_encode(
	const char *inputbuff, size_t insize,
	char **outptr, size_t *outlen)
{
	CURLcode code = Curl_base64_encode(NULL, inputbuff, insize, outptr, outlen);
	return code;
}

CURLcode curl_easy_base64_decode(
	const char *src,
	unsigned char **outptr, size_t *outlen)
{
	CURLcode code = Curl_base64_decode(src, outptr, outlen);
	return code;
}

void curl_easy_base64_cleanup(void *outptr)
{
	free(outptr);
}
