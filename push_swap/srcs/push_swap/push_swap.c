/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:05:22 by opochuev          #+#    #+#             */
/*   Updated: 2024/04/19 19:22:36 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

/*
void	free_dcharptr(char **dptr)
{
	size_t	i;

	if (dptr != NULL)
	{
		i = 0;
		while (dptr[i] != NULL)
		{
			free (dptr[i]);
			i++;
		}
		free(dptr);
	}
}
*/

//put 2 *p in NULL
//check hay args &
//if it is 2 arg, lst is empty
//devide str by ' '
//each number is substr
//initiate SA
//check if SA sorted
//2 nmbr - sa
//3 nmbr - sort_three
//>3     - sort_stacks
//free memory
int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
	{
		ft_printf("Error\n");
		return (1);
	}
	/*
	else if (argc == 2)
	{
		argv = split(argv[1], ' ');
		if (argv == NULL)
		{
			ft_printf("Error\n");
			exit(1);
		}
	}
	*/
	init_stack_a(&a, argv + 1);
	if (!stack_sorted(a))
    {
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	//free_dcharptr(argv);
	return (0);
}

/*
int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split(argv[1], ' ');
	init_stack_a(&a, argv + 1);
	if (!stack_sorted(a))
    {
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
*/