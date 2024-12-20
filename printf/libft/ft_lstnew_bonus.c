/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:46:19 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:48:38 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/*int main()
{
    char *data = "Hello, World!";
    t_list *node = ft_lstnew(data);

    if (node)
    {
        printf("Content: %s\n", (char *)node->content);//приведение с строке
        printf("Next: %p\n", (void *)node->next); //приведение к адресу
    }
    else
    {
        printf("Failed to create a node.\n");
    }
    free(node);
    return 0;
}*/