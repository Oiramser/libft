/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:04:17 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 20:29:14 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0' && str[i] == '\0')
		return (&((char *)str)[i]);
	while (i > 0)
	{
		i--;
		if ((char)c == str[i])
			return (&((char *)str)[i]);
	}
	return (0);
}
