#include "libft.h"

// cant cast void so must cast them to type charn *.
// dont add null terminator at the end because i am only creating raw memory for a string.

void *memcpy(void *dest, const void *src, size_t n)
{
    // copy n bytes from src to dest, memory must not overlap. in such case use memmove.
    size_t i;
    unsigned char *d;
    const unsigned char *s; // needs to match the function variable type declaration.

    if (!dest && !src)
        return (0);

    i = 0;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

int main(void)
{

}