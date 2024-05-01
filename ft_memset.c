/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:51:47 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 17:01:29 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*aux_ptr;

	i = 0;
	aux_ptr = (char *)ptr;
	while (i < num)
	{
		aux_ptr[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
