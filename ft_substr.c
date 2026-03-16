/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_substr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/13 14:38:17 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/13 19:14:31 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ss;
	size_t		i;
	size_t		slen;

	i = 0;
	slen = 0;
	if (!s)
		return (NULL);
	while (s[slen])
		s[slen]++;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = slen - start;
	ss = (char *)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
