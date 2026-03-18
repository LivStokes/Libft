/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strmapi.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/16 12:11:25 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/17 12:01:55 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdlib.h>

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

#include <stdio.h>

char alternate_case(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (toupper(c));
    else
        return (tolower(c));
}

int	main(void)
{
	char *str = "Hello world";
	char *result;

	result = ft_strmapi(str, alternate_case);
	if (result)
	{
		printf("Original: %s\n", str);
        printf("Result:   %s\n", result); // Output: HeLlO WoRlD
        free(result); // Don't forget to free the malloc'd string!a
	}
	return (0);
}

