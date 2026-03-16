/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putchar_fd.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: olistoke <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/16 12:41:42 by olistoke       #+#    #+#                */
/*   Updated: 2026/03/16 12:48:05 by olistoke       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
