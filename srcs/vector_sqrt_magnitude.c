#include "vector.h"

float		vector_sqrt_magnitude(const t_vector *vec)
{
	return (sqrt(fabs((vec->x * 2)) + fabs((vec->y * 2)) + fabs((vec->z * 2))));
}
