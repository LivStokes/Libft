/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstclear.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 15:33:26 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/18 15:33:28 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstdelone(t_list *lst, void (*del)(void *)
{
  if (!lst || !del)
    return ;
  del(lst->content);
  free(lst);
}

