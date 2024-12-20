/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:02:05 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:33:40 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (NULL == lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (NULL == lst)
		return ;
	if (NULL == *lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}
//проверяем не пустой ли указатель
//проверем если в * нет значения
//вносим туда new если пусто
//указатель last ук на посл звено
//пишем адрес new  в next last
/*int	main()
{
	t_list	*head, *node_1, *node_2;

	head = ft_lstnew("hello");
	node_1 = ft_lstnew("world");
	node_2 = ft_lstnew("!");

	if (!head || !node_1 || !node_2)
	{
		// Обработка ошибки при выделении памяти
		return 1; // Возвращаем код ошибки
	}

	ft_lstadd_back(&head, node_1);
	ft_lstadd_back(&head, node_2);

	t_list	*current;
	
	current = head;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}

	// Освобождаем память, если это необходимо
	// ft_lstclear(&head, free);

	return 0;
}*/