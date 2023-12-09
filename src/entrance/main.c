/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:25:38 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/09 01:58:23 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
	{
		a = init_stack();
		a->top = fill_stack(argc, argv, &a);
		check_dup(a->top);
		b = init_stack();
		if (is_sorted(a))
		{
			free_all(a, b);
			return (EXIT_SUCCESS);
		}
/* 		push_swap(a, b); need to implement this function */
		free_all(a, b);
	}
	return (EXIT_SUCCESS);
}
