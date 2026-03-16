/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/11 15:39:53 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 18:08:46 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	rj;

	i = 0;
	j = 0;
	rj = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (size + j);
	while (src[rj] && (i + rj + 1) < size)
	{
		dst[i + rj] = src[rj];
		rj++;
	}
	dst[i + rj] = '\0';
	return (i + j);
}
