/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/12 11:49:28 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 18:10:15 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
