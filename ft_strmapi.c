/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:39:37 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/02 19:46:05 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_toupper(unsigned int c, char str){
    if (str >= 'a' && str <= 'z') 
    {
    return str - ('a' - 'A');
    }else{
        return str;
    }
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*res;
	int		i;

	len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	if (res == 0)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int i = 0;
    char *str = "hola mundo";
    char *res = ft_strmapi(str, ft_toupper);
    printf("%s\n", str);
    printf("%s\n", res);
    return (0);
}*/
