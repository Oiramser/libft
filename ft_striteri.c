/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:48:50 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/03 12:33:47 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_toupper(unsigned int c, char *str){
    if (*str >= 'a' && *str <= 'z') 
    {
    return *str - 32;
    }
}*/

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		f(i, &str[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int i = 0;
    char str[] = "hola mundo";
    printf("%s\n", str);
    ft_striteri(str, ft_toupper);
    printf("%s\n", str);
    return (0);
}*/
