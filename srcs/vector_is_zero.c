#include "vector.h"

bool		vector_is_zero(const t_vector *a)
{
	if (fabs(a->x) < 0.00005 && fabs(a->y) < 0.00005 && fabs(a->z) < 0.00005)
		return (true);
	return (false);
}
