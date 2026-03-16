#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     i;
    t_list  *c;

    i = 0;
    c = lst;
    while (c)
    {
        i++;
        c = c->next;
    }
    return (i);
}