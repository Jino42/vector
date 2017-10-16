#include "vector.h"

t_vector		vector_get_normalize(const t_vector *vec)
{
	t_vector new;
	float magnitude;

	magnitude = vector_magnitude(vec);
	if (!magnitude)
		magnitude = 0.0001;
	new.x = vec->x / magnitude;
	new.y = vec->y / magnitude;
	new.z = vec->z / magnitude;
	return (new);
}

void		vector_normalize(t_vector *vec)
{
	float magnitude;

	magnitude = vector_magnitude(vec);
	if (!magnitude)
		magnitude = 0.0001;
		vec->x = vec->x / magnitude;
		vec->y = vec->y / magnitude;
		vec->z = vec->z / magnitude;
	return ;
}
