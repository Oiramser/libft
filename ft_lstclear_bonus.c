/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:12:41 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 17:47:29 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

/*int main()
{
	int val1 = 42;
	int val2 = 43;
	int val3 = 45;

	t_list *lst = ft_lstnew(&val1);
	t_list *sec_node = ft_lstnew(&val2);
	t_list *ther_node = ft_lstnew(&val3);

	lst->next = sec_node;
	sec_node->next = ther_node;

	ft_lstclear(lst, ft_lstdelone);
	return (0);
}*/
