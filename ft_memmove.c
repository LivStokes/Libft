void *memmove(void *dest, const void *src, size_t n)
{
    int i;

    void *

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}