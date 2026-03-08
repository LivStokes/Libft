/*
Name
memset - fill memory with a constant byte
Synopsis
#include <string.h>
void *memset(void *s, int c, size_t n);
Description
The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
Return Value
The memset() function returns a pointer to the memory area s.
void * = treat this memory address as a collection of individual bytes.
The most common use is "zeroing out" a structure or array to ensure no "garbage values" or used to Quickly clearing a buffer to reuse it.
*/


#include <string.h>
#include <stdio.h>
#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
    // fill a blovk of memory with a particular value
    size_t i;
    unsigned char *j;

    i = 0;
    j = (unsigned char *)s;
    while (i < n)
        j[i++] = (unsigned char)c;
    return (s);
}

int main(void)
{
    char buffer[10];
    char meow[10];
    size_t i = 0;
    
    ft_memset(buffer, 'F', sizeof(buffer));
    memset(meow, 0, sizeof(meow));
    while (i < sizeof(buffer))
    {
        printf("%c", buffer[i]);
        i++;
    }
    i = 0;
    write(1, "\n", 1);
    while (i < sizeof(meow))
    {
        printf("%d", meow[i]);
        i++;
    }
    return (0);
}