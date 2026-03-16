/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/11 15:39:53 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/13 20:15:22 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	rj;

	i = 0;
	j = 0;
	rj = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (i == size)
		return (size + j);
	while (src[rj] && (i + rj + 1) < size)
	{
		dst[i + rj] = src[rj];
		rj++;
	}
	dst[i + rj] = '\0';
	return (i + j);
}

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[30] = "Hello";
    char dest[30] = "World";
    size_t  size = 50;

    char src1[99] = "Hello";
    char dest1[99] = "World";
    size_t  size1 = 50;

    printf("My function: %zu\n", ft_strlcat(dest, src, size));
    printf("Real function: %d\n", strlcat(dest1, src1, size1));
    return (0);
}

