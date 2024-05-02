/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:12:57 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/02 19:37:27 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	int		len;

	len = ft_strlen(str) + 1;
	res = (char *)malloc(len);
	if (res == NULL)
		return (0);
	ft_strlcpy(res, str, len);
	return (res);
}
