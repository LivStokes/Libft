/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memset.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 14:10:08 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/12 17:22:59 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *)s;
	while (i < n)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
