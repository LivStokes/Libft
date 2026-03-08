#include "libft.h"

char *ft_strdup(char *str)
{
    int i = 0;
    int j = 0;
    char *r;

    while (str[i])
        i++;
    r = malloc(sizeof(char *) + (i + 1));
    if (!r)
        return (0);
    i = 0;
    while (str[i])
    {
        r[i] = str[i];
        i++;
    }
    r[i] = '\0';
    return (r);
}