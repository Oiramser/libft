/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:35:46 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 19:55:00 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((char) c == str[i])
		{
			return (&((char *)str)[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)str)[i]);
	return (0);
}
