/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:57:17 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 13:42:41 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (0);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int	main()
{
	int	val_contenido = 42;
	t_list	*node = ft_lstnew(&val_contenido);

	printf ("%d\n", *(int *)node->content);
	free(node);
	return (0);
}*/
