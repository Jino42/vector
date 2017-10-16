#include "vector.h"

/*
** Vecteur normalisé seulement
*/

float		vector_dot(const t_vector *a, const t_vector *b)
{
	return ((a->x * b->x) + (a->y * b->y) + (a->z * b->z));
}
