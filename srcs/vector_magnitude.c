#include "vector.h"

float		vector_magnitude(const t_vector *vec)
{
	return (fabs((vec->x * vec->x)) + fabs((vec->y * vec->y)) + fabs((vec->z * vec->z)));
}
