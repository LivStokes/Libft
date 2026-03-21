/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstmap.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 15:34:21 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 17:33:02 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*nn;
	void	*check;

	n = NULL;
	while (lst)
	{
		check = f(lst->content);
		if (!check)
		{
			ft_lstclear(&n, del);
			return (NULL);
		}
		nn = ft_lstnew(check);
		if (!nn)
		{
			del(check);
			ft_lstclear(&n, del);
			return (NULL);
		}
		ft_lstadd_back(&n, nn);
		lst = lst->next;
	}
	return (n);
}
