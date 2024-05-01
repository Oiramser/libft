/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:22:20 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 17:35:04 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*aux_d;
	char	*aux_s;

	i = 0;
	aux_d = (char *)dest;
	aux_s = (char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			aux_d[i] = aux_s[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n)
		{
			aux_d[n - 1] = aux_s[n - 1];
			n--;
		}
	}
	return (dest);
}
