#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, m = 1;
	double s = 0;
	for (i = 2; i <= 10; i++)
	{
		m *= i;
		if (i % 2 == 0)
			s += 1.0 / m;
	}
	printf("½á¹ûÎª%lf\n", s);
	system("PAUSE");
	return 0;
}
