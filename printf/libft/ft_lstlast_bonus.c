/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:31:18 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:37:30 by opochuev         ###   ########.fr       */
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
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (NULL == lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
int main(void) {
    t_list *head;
    head = ft_lstnew("first node");
    head->next = ft_lstnew("second node");
    head->next->next = ft_lstnew("third node");

    t_list *last_node = ft_lstlast(head);

    if (last_node)
    {
        printf("The last node contains: %s\n", (char *)(last_node->content));
    }
    else
    {
        printf("The list is empty.\n");
    }

    // Освобождаем память, если это необходимо
    // ft_lstclear(&head, free);

    return 0;
}*/