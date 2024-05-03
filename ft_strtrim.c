/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:07:02 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/03 13:27:03 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		inicio;
	int		fin;
	char	*res;

	inicio = 0;
	fin = ft_strlen(s1);
	while (s1[inicio] && ft_strchr(set, s1[inicio]))
		inicio++;
	while (fin > inicio && ft_strrchr(set, s1[fin - 1]))
		fin--;
	res = ft_substr(s1, inicio, fin - inicio);
	return (res);
}
