/*
 * Copyright (c) 2009-2010 Christoph Schueler <chris@konnex-tools.de,
                                               cpu12.gems@googlemail.com>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#if !defined(__UTL_H)
#define __UTL_H

#include "std_types.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

typedef enum tagUtl_EndianessType {
    UTL_BIG_ENDIAN,
    UTL_LITTLE_ENDIAN
} Utl_EndianessType;

Utl_EndianessType Utl_CheckEndianess(void);

bool Utl_BitGet(uint16_t w,uint8_t num);
uint16_t Utl_BitSet(uint16_t w,uint8_t num);
uint16_t Utl_BitReset(uint16_t w,uint8_t num);
uint16_t Utl_BitToggle(uint16_t w,uint8_t num);
uint16_t Utl_BitGetHighest(uint16_t w);
uint16_t Utl_BitGetLowest(uint16_t w);
uint16_t Utl_BitSetLowest(uint16_t w);
uint16_t Utl_BitResetLowest(uint16_t w);
uint8_t Utl_Log2(uint16_t num);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* __UTL_H */
