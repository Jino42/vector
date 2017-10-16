#include "vector.h"

t_vector		vector_get_invert(const t_vector *vec)
{
	t_vector new;

	new.x = -vec->x;
	new.y = -vec->y;
	new.z = -vec->z;
	return (new);
}

void		vector_invert(t_vector *vec)
{
	vec->x = -vec->x;
	vec->y = -vec->y;
	vec->z = -vec->z;

	return ;
}
