#ifndef BITSET_H
#define BITSET_H

#include "common.h"

inline int bitset_get(const char* bitset, llong pos)
{
    return ((bitset[pos >> 3]) >> (pos & 7)) & 1;
}

inline void bitset_flip(char* bitset, llong pos)
{
    const char bitmask = 1 << (pos & 7);

    bitset[pos >> 3] ^= bitmask;
}

inline void bitset_set(char* bitset, llong pos)
{
    const char bitmask = 1 << (pos & 7);

    bitset[pos >> 3] |= bitmask;
}

inline void bitset_clear(char* bitset, llong pos)
{
    const char bitmask = ~(1 << (pos & 7));

    bitset[pos >> 3] &= bitmask;
}

#endif

