/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/19 11:59:16 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 17:53:59 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wrdlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*wrdmem(char const *s, char c)
{
	int		i;
	int		wrd;
	char	*r;

	i = 0;
	wrd = wrdlen(s, c);
	r = malloc(sizeof(char) * (wrd + 1));
	if (!r)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

static int	wrdcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	char	**r;

	i = 0;
	x = 0;
	r = (char **)malloc(sizeof(char *) * (wrdcount(s, c) + 1));
	if (!r || !s)
		return (NULL);
	while (x < wrdcount(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
		{
			r[x] = wrdmem(&s[i], c);
			if (!r[x])
				return (NULL);
			x++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	r[x] = NULL;
	return (r);
}
