#include "vector.h"

t_vector		vector_get_copy(const t_vector *a)
{
	t_vector new;

	new.x = a->x;
	new.y = a->y;
	new.z = a->z;
	return (new);
}

void		vector_copy(t_vector *a, const t_vector *b)
{
	a->x = b->x;
	a->y = b->y;
	a->z = b->z;
}
