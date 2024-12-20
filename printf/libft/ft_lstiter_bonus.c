/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:44:42 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:36:42 by opochuev         ###   ########.fr       */
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

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (NULL == lst || NULL == del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	if (NULL == lst || NULL == del)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}

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
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
void    print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list *head = NULL;

    // Создаем узлы списка вручную
    head = ft_lstnew("first node");
    head->next = ft_lstnew("second node");
    head->next->next = ft_lstnew("third node");

    // Используем ft_lstiter для вывода каждого элемента
    ft_lstiter(head, &print_content);

    // Освобождаем память, выделенную под список
    ft_lstclear(&head, free);

    return 0;
}*/