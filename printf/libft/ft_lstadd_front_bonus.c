/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:36:39 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:34:13 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/*
int main()
{
    t_list *list = NULL; // Инициализация пустого списка

    // Создаем новый узел
    t_list *node = ft_lstnew("New node data");

    // Добавляем узел в начало списка
    ft_lstadd_front(&list, node);

    // Теперь значение первого элемента списка должно быть обновлено
    if (list)
    {
        printf("Value of the first node: %s\n", (char *)list->content);
    }
    else
    {
        printf("List is empty.\n");
    }

    // Освобождаем память, удаляя список
    ft_lstclear(&list, free);

    return 0;
}*/