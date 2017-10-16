#include "vector.h"

t_vector		vector_get_copy(const t_vector *a)
{
	t_vector new;

	ft_memcpy(&new, a, sizeof(t_vector));
	return (new);
}

void		vector_copy(t_vector *a, const t_vector *b)
{
	ft_memcpy(a, b, sizeof(t_vector));
}
