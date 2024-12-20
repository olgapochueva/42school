/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:10:08 by opochuev          #+#    #+#             */
/*   Updated: 2024/02/06 13:40:55 by opochuev         ###   ########.fr       */
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
int	ft_lstsize(t_list *lst)
{
	int		counter;

	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst -> next;
	}
	return (counter);
}
/*
int main(void) {
    t_list *head;
    head = ft_lstnew("first node");
    head->next = ft_lstnew("second node");
    head->next->next = ft_lstnew("third node");

    printf("The number of nodes is: %d\n", ft_lstsize(head));

    return 0;
}*/