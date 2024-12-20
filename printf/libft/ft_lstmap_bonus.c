/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:24:45 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/08 12:01:37 by opochuev         ###   ########.fr       */
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

void *my_function(void *content)
{
    // Пример: преобразование содержимого элемента в верхний регистр
    char *str = (char *)content;
    int len = ft_strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return (void *)str;
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			while (new_list)
			{
				new_node = new_list->next;
				del(new_list->content);
				free(new_list);
				new_list = new_node;
			}
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
//применяет f создавая новый список
//использует dell если 
//выделение памяти не удал
/*
int main()
{
    t_list *head = NULL;

    // Создаем узлы списка вручную
    head = ft_lstnew("first node");
    head->next = ft_lstnew("second node");
    head->next->next = ft_lstnew("third node");

    // Используем ft_lstmap для применения функции к каждому элементу
    t_list *new_list = ft_lstmap(head, &my_function, free);

    t_list *temp = new_list;

    while (temp)
    {
        printf("%s\n", (char *)(temp->content));
        temp = temp->next;  // Перемещаем временный указатель
    }

    // Не забываем освободить память по завершении
    ft_lstclear(&new_list, free);
        return 0;
}*/