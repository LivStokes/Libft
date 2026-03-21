/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strmapi.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/16 12:11:25 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 18:08:32 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char				*r;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	r = malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
