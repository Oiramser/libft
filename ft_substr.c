/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:43:36 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/02 19:47:36 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char	*res;

	i = 0;
	j = 0;
	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			res[j] = s[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}

/*#include <stdio.h>

int main ()
{
    char str[] = "Hola mundo que tal";
    char *sub = ft_substr(str, 6, 5);

    printf("%s\n", sub);
    return 0;

}*/
