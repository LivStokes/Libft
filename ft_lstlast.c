/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstlast.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 14:43:23 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/20 12:54:16 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
