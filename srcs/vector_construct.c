#include "vector.h"

t_vector		vector_construct(const float x, const float y, const float z)
{
	t_vector new;

	new.x = x;
	new.y = y;
	new.z = z;

	return (new);
}
