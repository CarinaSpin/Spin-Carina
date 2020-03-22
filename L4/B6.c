#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b)
{
	int *s = 0;
	s = (int*)malloc(sizeof(int));
	*s = a + b;
	return *s;
}
int main()
{
	int a, b;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("Suma este %d\n", suma(a, b));
	system("pause");
	return 0;
}