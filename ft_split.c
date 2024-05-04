/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:28:06 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/04 15:59:22 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_word(const char *c, int d)
{
	int	cont;
	int	delimit;

	cont = 0;
	delimit = 0;
	while (*c)
	{
		if (*c == d)
		{
			delimit = 0;
		}
		else if (!delimit)
		{
			cont++;
			delimit = 1;
		}
		c++;
	}
	return (cont);
}

static int	ft_num_let(const char *c, int d)
{
	int	cont;

	cont = 0;
	while (*c && *c != d)
	{
		cont++;
		c++;
	}
	return (cont);
}

static void	*ft_free_memory(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		cont;
	int		i;
	char	**res;

	cont = ft_num_word(s, c);
	i = 0;
	if (!s)
		return (0);
	res = (char **)malloc(sizeof(char *) * (cont + 1));
	if (!res)
		return (0);
	res[cont] = NULL;
	while (*s)
	{
		if (*s != c)
		{
			res[i] = ft_substr(s, 0, ft_num_let(s, c));
			if (!res[i++])
				return (ft_free_memory(res));
			s += ft_num_let(s, c);
		}
		else
			s++;
	}
	return (res);
}
