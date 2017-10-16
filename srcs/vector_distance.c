#include "vector.h"

float	vector_distance(const t_vector *a, const t_vector *b)
{
	t_vector new;
	new.x = a->x - b->x;
	new.y = a->y - b->y;
	new.z = a->z - b->z;
	return (vector_sqrt_magnitude(&new));
}
