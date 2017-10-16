#include "vector.h"

void 	vector_rotate_x(t_vector *a, const float angle)
{
	float tmp;

	tmp = a->y * cos(angle) - a->z * sin(angle);
	a->z = a->y * sin(angle) + a->z * cos(angle);
	a->y = tmp;
	return ;
}

t_vector 	vector_get_rotate_x(const t_vector *a, const float angle)
{
	t_vector new;

	new.y = a->y * cos(angle) - a->z * sin(angle);
	new.z = a->y * sin(angle) + a->z * cos(angle);
	new.x = a->x;
	return (new);
}
