/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:32:44 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 17:05:22 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_free(*str)
{
	free(str);
}*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main()
{
	int	num = 42;
	t_list	*node = ft_lstnew(&num);
	ft_lstdelone(&node, ft_free);
	if (node == NULL)
	{
		printf("El nodo a sido eliminado correctamente.\n");
	}
	else
	{
		printf("Error en la eliminacion");
	}
	return (0);
}*/
