#include "vector.h"

t_vector		vector_get_normalize(const t_vector *vec)
{
	t_vector new;
	float magnitude;

	magnitude = vector_sqrt_magnitude(vec);
	if (!magnitude)
		return (*vec);
	new.x = vec->x / magnitude;
	new.y = vec->y / magnitude;
	new.z = vec->z / magnitude;
	return (new);
}
#include <stdio.h>
void		vector_normalize(t_vector *vec)
{
	float magnitude;

	magnitude = vector_sqrt_magnitude(vec);
	if (!magnitude)
		return ;
	vec->x = vec->x / magnitude;
	vec->y = vec->y / magnitude;
	vec->z = vec->z / magnitude;
	return ;
}
