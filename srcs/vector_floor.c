#include "vector.h"

t_vector 		vector_get_floor(const t_vector *a)
{
	t_vector new;

	new.x = (int)a->x;
	new.y = (int)a->y;
	new.z = (int)a->z;
	return (new);
}

void 			vector_floor(t_vector *a)
{
	a->x = (int)a->x;
	a->y = (int)a->y;
	a->z = (int)a->z;

	return ;
}
