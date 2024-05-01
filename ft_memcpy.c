/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:10:55 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 17:38:04 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*aux_dest;
	char	*aux_src;

	i = 0;
	aux_dest = (char *)dest;
	aux_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
