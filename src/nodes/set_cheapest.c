/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:08:43 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/07 01:45:06 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	set_cheapest(t_stack *b)
{
	long	best_match_value;
	t_stack	*best_match_node;

	best_match_node = NULL;
	if (NULL == b)
		return ;
	best_match_value = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_match_value)
		{
			best_match_value = b->push_price;
			best_match_node = b;
		}
		b = b->next;
	}
	best_match_node->cheapest = TRUE;
}
