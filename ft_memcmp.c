/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:51:42 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 21:28:19 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t num)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)p1;
	aux2 = (unsigned char *)p2;
	while (i < num)
	{
		if (aux1[i] == aux2[i])
			i++;
		else
			return (aux1[i] - aux2[i]);
	}
	return (0);
}
