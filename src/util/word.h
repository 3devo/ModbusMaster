#ifndef _UTIL_WORD_H_
#define _UTIL_WORD_H_

#include <stdint.h>

static inline uint16_t lowWord(uint32_t ww)
{
  return ww;
}

static inline uint16_t highWord(uint32_t ww)
{
  return ww >> 16;
}

#endif /* _UTIL_WORD_H_ */
