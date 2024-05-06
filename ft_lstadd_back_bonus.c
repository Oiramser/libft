/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:31:59 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 16:27:07 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_node;

	new_node = *lst;
	if (lst == NULL || *lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (new_node->next != NULL)
	{
		new_node = new_node->next;
	}
	new_node->next = new;
}

/*int	main()
{
	int valor_new = 42;
	int val2 = 43;
	t_list *lst = ft_lstnew(&valor_new);
	t_list *sec_node = ft_lstnew(&val2);
	ft_lstadd_back(&list, sec_node);
	t_list	*current = lst;
	while (current != NULL)
	{
		printf("%d\n", ((int*)current->content));
		current = current->next;
	}
	while (lst != NULL)
	{
		t_list *tem = lst;
		lst = lst->next;
		free(tem);
	}
	return (0);
}*/
