/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstsize.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 14:40:11 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/20 12:26:13 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
