/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_itoa.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 16:43:37 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/21 18:17:08 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlen(int nbr)
{
	int		len;
	long	n;

	len = 0;
	n = nbr;
	if (n <= 0)
	{
		len = 1;
		if (n < 0)
			n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*r;
	long	nb;

	nb = n;
	len = getlen(n);
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	r[len] = '\0';
	if (nb == 0)
		r[0] = '0';
	if (nb < 0)
	{
		r[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		len--;
		r[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (r);
}
