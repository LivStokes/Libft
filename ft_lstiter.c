#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *c;

    c = lst;
    if (!c)
        return (NULL);
    while (c->next)
    {
        f(c->content);
        c = c->next;
    }
    f(c->content);
}