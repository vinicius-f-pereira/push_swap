/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:22:52 by vde-frei          #+#    #+#             */
/*   Updated: 2023/11/18 02:41:22 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack **a, char **argv, bool flag)
{
	long	nbr;

	while (*argv)
	{
		nbr = ft_atol(*argv);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_free(a, argv, flag);
		if (check_double(*a, (int)nbr))
			error_free(a, argv, flag);
		append_node(a, (int)nbr);
		++argv;
	}
}

void	error_free(t_stack **a, char **argv, bool flag)
{
	(void)argv;
	(void)flag;
	ft_putstr_fd("Error\n", 2);
	free_list(*a);
	exit(ERR);
}

int	check_double(t_stack *a, int nbr)
{
	if (NULL == a)
		return (FALSE);
	while (a)
	{
		if (a->value == nbr)
			return (TRUE);
		a = a->next;
	}
	return (FALSE);
}
