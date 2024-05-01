/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:45:00 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 19:31:42 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
	{
		return (len_s + size);
	}
	else
	{
		while (src[i] && len_d + i < size -1)
		{
			dest[len_d + i] = src[i];
			i++;
		}
		dest[len_d + i] = '\0';
		return (len_d + len_s);
	}
}
