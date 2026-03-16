/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_striteri.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/16 12:30:26 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 17:40:48 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int 	main(void)
{
	
	return (0);
}
*/
