#include "vector.h"

t_vector		vector_get_add(const t_vector *a, const t_vector *b)
{
	t_vector new;

	new.x = a->x + b->x;
	new.y = a->y + b->y;
	new.z = a->z + b->z;

	return (new);
}

void		vector_add(t_vector *a, const t_vector *b)
{
	a->x += b->x;
	a->y += b->y;
	a->z += b->z;
	return ;
}
