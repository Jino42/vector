#include "vector.h"

t_vector		vector_move_towards(const t_vector *a, const t_vector *b, const float t)
{
	t_vector new;

	new.x = a->x + (b->x - a->x) * t;
	new.y = a->y + (b->y - a->y) * t;
	new.z = a->z + (b->z - a->z) * t;
	if (new.x > t)
		new.x = t;
	if (new.y > t)
		new.y = t;
	if (new.z > t)
		new.z = t;
	return (new);
}
