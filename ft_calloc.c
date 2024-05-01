/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:50:12 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/01 22:04:41 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_items, size_t size)
{
	void	*resp;

	resp = malloc(num_items * size);
	if (resp == NULL)
		return (0);
	ft_memset(resp, 0, num_items * size);
	return (resp);
}
