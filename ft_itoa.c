/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_itoa.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 16:43:37 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 15:19:16 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	getlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len = 1;
		if (nbr < 0)
			nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*r;

	i = getlen(n);
	r = (char *)malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);
	r[i] = '\0';
	if (n < 0)
	{
		r[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		r[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 50;
	printf("itoa: %s\n", ft_itoa(n));
	return (0);
}
*/
