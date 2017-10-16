#include "vector.h"

bool		vector_aequals(const t_vector *a, const t_vector *b)
{
	if (fabs(vector_sqrt_magnitude(a) - vector_sqrt_magnitude(b)) < 0.00005)
		return (true);
	return (false);
}
