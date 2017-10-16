#include "vector.h"

t_vector	vector_cross_product(const t_vector *a, const t_vector *b)
{
	t_vector new;

	new.x = (a->y * b->z) - (a->z * b->y);
	new.y = (a->z * b->x) - (a->x * b->z);
	new.z = (a->x * b->y) - (a->y * b->x);
	return (new);
}
