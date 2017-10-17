#include "vector.h"

void		vector_limit(t_vector *a, const float limit)
{
	if (vector_magnitude(a) > limit)
	{
		vector_normalize(a);
		a->x *= limit;
		a->y *= limit;
		a->z *= limit;
	}
	return (new);
}
