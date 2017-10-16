#include "vector.h"

t_vector		vector_get_normalize(const t_vector *vec)
{
	t_vector new;

	new.x = vec->x / vector_sqrt_magnitude(vec);
	new.y = vec->y / vector_sqrt_magnitude(vec);
	new.z = vec->z / vector_sqrt_magnitude(vec);
	return (new);
}

void		vector_normalize(t_vector *vec)
{
	float magnitude;

	magnitude = vector_magnitude(vec);
	vec->x = vec->x / magnitude;
	vec->y = vec->y / magnitude;
	vec->z = vec->z / magnitude;

	return ;
}
