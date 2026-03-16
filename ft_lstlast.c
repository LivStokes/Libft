#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list c;

    c = *lst;
    if (!c)
        *lst = new;
    else
    {
        while (c->next)
            c = c->next;
        c->next = new;
    }
}