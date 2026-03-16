/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_calloc.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/12 16:26:49 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 18:11:04 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
