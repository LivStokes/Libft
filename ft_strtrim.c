/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strtrim.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/13 19:29:07 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 18:08:05 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*r;

	i = 0;
	j = 0;
	x = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	r = malloc(sizeof(char) * (j - i + 1));
	if (!r)
		return (NULL);
	while (i < j)
		r[x++] = s1[i++];
	r[x] = '\0';
	return (r);
}
