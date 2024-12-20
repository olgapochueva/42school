/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:29:12 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:34:54 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
		current = current -> next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
//ук для итерации
//временный где храним значение 
//сохраняем тек узел
//переходим к сл узлу
//удаляем тек узел
//уст узел в null
/*int main(void)
{
    t_list *head = NULL;

    // Создаем список
    head = ft_lstnew("first node");
    head->next = ft_lstnew("second node");
    head->next->next = ft_lstnew("third node");

    // Очищаем список и удаляем его содержимое
    ft_lstclear(&head, delete_content);

    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("List is not empty.\n");
    }

    return 0;
}*/