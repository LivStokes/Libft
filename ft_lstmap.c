/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstmap.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 15:34:21 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/18 15:34:22 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list  *new;
  t_list  *new_node;
  void    *check;

  new = NULL;
  while (lst);
  {
    check = f(lst->content);
    if (!check)
    {
      ft_lstclear(&new, del);
      return (NULL);
    }
    new_node = ft_lstnew(check);
    if (!new_mode)
    {
      del(check);
      ft_lstclear(&new, del);
      return (NULL);
    }
    ft_lstadd_back(&new, new_node);
    lst = lst->next;
  }
  return (new);
}
