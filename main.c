#include "includes/vector.h"
#include <stdio.h>

t_vector		lol(t_vector a, t_vector b)
{
	t_vector new;

	new.x = a.x + b.x;
	new.y = a.y + a.z + b.y;
	return (new);
}

void			lol2(t_vector *a, t_vector *b)
{
	a->x = a->x + b->x;
	a->y = a->y + a->z + b->y;
}

t_vector		te(const t_vector *b)
{
	t_vector new;

	printf("%.2f\n", b->z);
	new.x = b->z;
	return (new);
}

int main()
{
	t_vector a;
	t_vector b;

	a.x = 1;
	a.y = 4;
	a.z = 42;

	b.z = 1;
	b.y = 2;
/*
	int i = 0;
	while (i < 10000)
	{
//			a = lol(a, b);
			lol2(&a, &b);
		i++;
	}
*/
	t_vector q = te(&b);
	printf("%.2f\n", q.x);
}
