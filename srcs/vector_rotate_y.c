#include "vector.h"

void 	vector_rotate_y(t_vector *a, const float angle)
{
	float tmp;

	tmp = a->x * cos(angle) + a->z * sin(angle);
	a->z = a->x * -sin(angle) + a->z * cos(angle);
	a->x = tmp;
	return ;
}

t_vector 	vector_get_rotate_y(const t_vector *a, const float angle)
{
	t_vector new;

	new.x = a->x * cos(angle) + a->z * sin(angle);
	new.z = a->x * -sin(angle) + a->z * cos(angle);
	new.y = a->y;
	return (new);
}
