#include "vector.h"

t_vector		vector_get_div(const t_vector *a, const float div)
{
	t_vector new;

	new.x = a->x / div;
	new.y = a->y / div;
	new.z = a->z / div;

	return (new);
}

void		vector_div(t_vector *a, const float div)
{
	a->x /= div;
	a->y /= div;
	a->z /= div;

	return ;
}
