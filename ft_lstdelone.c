/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstdelone.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 14:51:15 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/18 15:32:45 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
*/
