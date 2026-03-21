/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memmove.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 14:38:04 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 17:28:09 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
