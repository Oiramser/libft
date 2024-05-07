/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:05:18 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/07 15:39:45 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (f)
			new_node = ft_lstnew(f(lst->content));
		else
			new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*void	ft_toupper(void *ptr)
{
	char	*str = (char *)ptr;
	if (*str >= 'a' && *str <= 'z')
		return (*str - 32);
}

void ft_free (void *ptr)
{
	free(ptr);
}

int main()
{
	char	val1 = 'a';
	char	val2 = 'b';
	t_list *node1 = ft_lstnew(&val1);
	t_list *node2 = ft_lstnew(&val2);
	node1->next = node2;
	ft_lstmap(node1, ft_toupper, ft_free);
	t_list *current = node1;
	while (current != NULL);
	{
		printf("%c ", *(char *)current->content);
		current = current->next;
	}
	return (0);
}*/
