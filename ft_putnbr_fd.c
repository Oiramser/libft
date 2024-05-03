/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:55:39 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/03 13:07:48 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	res;

	res = (long long)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		res = -res;
	}
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putchar_fd(48 + (res % 10), fd);
	}
	else
	{
		ft_putchar_fd(48 + res, fd);
	}
}
