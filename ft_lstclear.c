/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstclear.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 15:33:26 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 17:12:55 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		c = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = c;
	}
	free (*lst);
	*lst = NULL;
}
