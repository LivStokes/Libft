/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 16:40:09 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/18 16:52:34 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*wrdmem(char const *s, char c)
{
	int		i;
	char	*r;
	int		len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
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

int	wrdcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
				i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**r;
	int		len;
	int		x;

	i = 0;
	x = 0;
	len = wrdcount(s, c);
	r = (char **)malloc(sizeof(char *) * (len + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] && s[i] != c)
			r[x] = wrdmem(s, c);
	}
	r[i] = NULL;
	return (r);
}


int main(void)
{
	char *str = "Hello World my name is olivia";
	char c = ' ';
	char **result = ft_split(str, c);
	int i = 0;

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);

}
