#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h, m, s;

	printf("Informe o numero em segundos ");
	scanf("%d", &s);

	h = (s / 3600);
	m = (s % 3600) / 60;
	s = (s % 3600) % 60;

	printf("%d:%d:%d", h, m, s);

	return 0;
}

