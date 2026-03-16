/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 16:40:09 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 17:45:28 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*wrdmem(char s)
{
	int		i;
	char	*r;
	int		len;

	i = 0;
	len = ft_strlen(s);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (i < len)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

int	wrdcount(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && c)
			i++;
		if (s[i] && !c)
		{
			count++;
			while (s[i] && !c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**r;
	int		len;

	i = 0;
	len = wrdcount(s);
	*r = (char *)malloc(sizeof(char *) * (len + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] && c)
			i++;
		if (s[i])
			r[i++] = wrdmem(s);
	}
	r[i] = '\0';
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *s = "Hello world my name is olivia";
	char c = " ";
	printf("new strings: %s\n",ft_split(s, c));
}
*/
