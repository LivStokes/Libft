/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstnew.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/17 11:38:17 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/18 14:31:40 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*r;

	r = (t_list *)malloc(sizeof(*r));
	if(!r)
		return (NULL);
	r->content = content;
	r->next = NULL;
	return (r);
}
