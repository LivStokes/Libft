#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *c;

    while (*lst)
    {
        c = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = c;
    }
    free(*lst);
    *lst = NULL;
}