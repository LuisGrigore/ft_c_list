/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_link_list_iteration_life_cycle.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:56:57 by lgrigore          #+#    #+#             */
/*   Updated: 2025/11/26 19:53:00 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../gen_link_list_internal.h"

t_gen_list_iter	*gen_list_iter_start(t_gen_list *list)
{
	t_gen_list_iter	*it;

	if (!list)
		return (NULL);
	it = malloc(sizeof(t_gen_list_iter));
	if (!it)
		return (NULL);
	it->current = list->head;
	return (it);
}

void	gen_list_iter_destroy(t_gen_list_iter *it)
{
	if (!it)
		return ;
	free(it);
}
