/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrchr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/11 18:00:26 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 18:09:48 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
