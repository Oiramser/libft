/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:57:35 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/03 12:30:53 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_dig(int n)
{
	int	longitud;

	longitud = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		longitud++;
	while (n != 0)
	{
		longitud++;
		n = n / 10;
	}
	return (longitud);
}

char	*ft_itoa(int n)
{
	int		len;
	long	tem;
	char	*res;

	len = long_dig(n);
	tem = n;
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	if (tem == 0)
	{
		res[--len] = '0';
		return (res);
	}
	if (tem < 0)
	{
		res[0] = '-';
		tem *= -1;
	}
	while (tem > 0)
	{
		res[--len] = '0' + (tem % 10);
		tem /= 10;
	}
	return (res);
}
/*
int main()
{
    int n = -1234;
    char *res = ft_itoa(n);

    printf("%s", res);
}*/
