/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/11 16:38:30 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/14 16:19:09 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&s[i]);
}
/*
#include <stdio.h>

int main(void)
{
	const char s[20] = "Hello World";
	int	c = 'l';
	printf("String: %s\n", ft_strchr(s, c));
	return (0);
}
*/
