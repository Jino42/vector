/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_is_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 22:32:18 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/12/10 22:32:19 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

bool		vector_is_zero(const t_vector *a)
{
	if (fabs(a->x) < 0.00005 && fabs(a->y) < 0.00005 && fabs(a->z) < 0.00005)
		return (true);
	return (false);
}
