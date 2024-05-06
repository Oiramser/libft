/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:26:24 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 14:35:03 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main()
{
	int	valor_new = 42;
	t_list	*new_node = ft_lstnew(&valor_new);

	t_list *list = NULL;

	ft_lstadd_front(&list, new_node);
	printf("El contenido de la lista");
	t_list	*current = list;
	while (current != NULL)
	{
		printf("%d\n", *((int*)current->content));
		current = current->next;
	}
	while (list != NULL)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	return (0);
}*/
