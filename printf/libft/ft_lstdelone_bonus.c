/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:00:52 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:35:38 by opochuev         ###   ########.fr       */
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

// Определяем функцию для удаления содержимого звена
void delete_content(void *content)
{
    free(content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (NULL == lst || NULL == del)
		return ;
	del(lst -> content);
	free(lst);
}
/*
int main(void)
{
    t_list *node = ft_lstnew("Hello, World!");

    printf("Original Content: %s\n", (char *)(node->content));

    // Сохраняем указатель на содержимое перед удалением звена
    void *content = node->content;

    // Удаляем звено
    ft_lstdelone(node, delete_content);

    // Проверяем, что указатель на содержимое больше не валиден
    if (content)
    {
        printf("Content: %s\n", (char *)(content));
        printf("Node was not properly deleted.\n");
    }
    else
    {
        printf("Node was successfully deleted.\n");
    }

    return 0;
}*/