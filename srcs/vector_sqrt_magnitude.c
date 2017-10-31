#include "vector.h"

float		vector_sqrt_magnitude(const t_vector *vec)
{
	return (sqrtf(fabs((vec->x * vec->x)) + fabs((vec->y * vec->y)) + fabs((vec->z * vec->z))));
}
