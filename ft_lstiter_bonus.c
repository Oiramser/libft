/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:44:34 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/07 15:02:33 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_toupper(void *ptr)
{
	char *str = (char *)ptr;
	if (*str >= 'a' && *str <= 'z')
	{
		return *str - 32;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main()
{
	char val1 = 'a';
	char val2 = 'b';
	t_list *node1 = ft_lstnew(&val1);
	t_list *node2 = ft_lstnew(&val2);
	node1->next = node2;

	ft_lstiter(node1, ft_toupper);
	t_list *current = node1;
	while (current != NULL)
	{
		printf("%c ", *(char *)current->content);
		current = current->next;
	}
	printf("\n");

	free(node1);
	free(node2);
	return (0);
}*/
