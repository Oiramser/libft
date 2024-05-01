/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:13:35 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 21:25:29 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	value;

	value = len;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		value = ft_strlen(haystack);
	while (value >= ft_strlen(needle))
	{
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
		value--;
	}
	return (0);
}
