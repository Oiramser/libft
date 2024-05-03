/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:28:06 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/03 16:27:46 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numWord(const char *c, int d)
{
	int	cont;

	cont = 0;
	while (*c)
	{
		while (*c != d || *(c + 1) == '\0')
		{
			cont++;
			c++;
		}
		c++;
	}
	return (cont);
}

static int	ft_numLet(const char *c, int d)
{
	int cont;

	cont = 0;
	while(*c == d || *(c + 1) == '\0')
	{
		cont++;
		c++;
	}
	return (cont);
}

char **ft_split(char const *s, char c)
{
	int		cont;
	int		i;
	char	**res;
	const char	*inicio;

	cont = ft_numWord(s, c);
	i = 0;
	res = (char **)malloc((cont + 1) * sizeof(char *));
	inicio = s;
	if (res == NULL)
		return (0);
	while (*s)
	{
		if(*s == c || *(s + 1) == '\0')
		{
			res[i] = (char *)malloc((s - inicio + 1), sizeof(char));
			if (res == NULL)
				return (0);
			ft_strlcpy(res[i], inicio, ft_numLet(s, c));
			while (*(s + 1) == c)
				s++;
			inicio = s + 1;
			i++;
		}
		s++;
	}
	res[cont] = NULL;
	return (res);
}
