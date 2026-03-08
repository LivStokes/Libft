#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *p;

    i = 0;
    p = (unsigned char *)s;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}

int main(void)
{
    char str[20] = "Hello";

    ft_bzero(str, 2);
}