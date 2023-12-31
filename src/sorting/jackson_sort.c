/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jackson_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:59:43 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/06 16:47:53 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	jackson_sort(t_stack **a, t_stack **b)
{
	while (stack_len(*a) > 3)
	{
		while (stack_len(*a) > 3)
		{
			init_node(*a, *b);
			finish_rotation(a, find_smallest(*a), 'a');
			pb(b, a, FALSE);
		}
	}
}
