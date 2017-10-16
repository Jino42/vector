/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <ntoniolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 22:14:46 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/10/16 13:07:56 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* TODO
***** make oadd & add

** add
** sub
** mult
** div
** scale

** abs
** clear
** move towards
** min
** max
** dot
** to string *
** lerp
** rotate *
** angle between
** random vec2d
** random vec3d
** cross product
** limit *
*/

/*
** FLAG OPTI == OFF
** So, works with references;
*/

#ifndef VECTOR_H
# define VECTOR_H

# include <math.h>
# include "../libft/includes/libft.h"
# include <stdbool.h>

typedef struct	s_vector
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vector;

t_vector		vector_construct(const float x, const float y, const float z);

/*OvverRide*/ /*O*/
void			vector_clear(t_vector *a);

void			vector_normalize(t_vector *vec);
void			vector_abs(t_vector *a);
void 			vector_floor(t_vector *a);
void			vector_add(t_vector *a, const t_vector *b);
void			vector_sub(t_vector *a, const t_vector *b);
void			vector_scale(t_vector *a, const t_vector *b);
void			vector_mult(t_vector *a, const float mult);
void			vector_div(t_vector *a, const float div);
void			vector_copy(t_vector *a, const t_vector *b);
void			vector_invert(t_vector *vec);

/* */
bool			vector_aequals(const t_vector *a, const t_vector *b);
float			vector_distance(const t_vector *a, const t_vector *b);
float			vector_magnitude(const t_vector *vec);
float			vector_sqrt_magnitude(const t_vector *vec);

/*New vector*/
t_vector		vector_get_normalize(const t_vector *vec);
t_vector		vector_get_add(const t_vector *a, const t_vector *b);
t_vector		vector_get_sub(const t_vector *a, const t_vector *b);
t_vector		vector_get_scale(const t_vector *a, const t_vector *b);
t_vector		vector_get_mult(const t_vector *a, const float mult);
t_vector		vector_get_div(const t_vector *a, const float div);
t_vector		vector_get_copy(const t_vector *a);
t_vector 		vector_get_floor(const t_vector *a);
t_vector		vector_get_abs(const t_vector *a);
t_vector		vector_get_invert(const t_vector *vec);



#endif