/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:09:17 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 15:29:41 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main()
{
	int	v_node = 42;
	t_list	*new_node = ft_lstnew(&v_node);
	if (new_node == NULL)
		return (0);
	int	v_node2 = 43;
	t_list *node2 = ft_lstnew(&v_node2);
	if (node2 == NULL)
		return (0);
	new_node->next = node2;
	t_list *ult = ft_lstlast(new_node);
	printf("%d\n", *((int*)ult->content));
	return (0);
}*/
