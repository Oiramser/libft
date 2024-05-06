/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:14:10 by marmarti          #+#    #+#             */
/*   Updated: 2024/05/06 14:31:10 by marmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	cont = 0;
	while (lst != NULL)
	{
		cont++;
		lst = lst->next;
	}
	return (cont);
}

/*int	main()
{
	int	val1 = 42;
	int	val2 = 43;
	t_list *lst = ft_lstnew(&val1);
	t_list *sec_node = ft_lstnew(&val2);
	lst->next = sec_node;
	int tam = ft_lstsize(lst);
	printf("%d\n", tam);
	return (0);

}*/
