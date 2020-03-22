#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, *aux;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	aux = (int*)malloc(sizeof(int));
	*aux = a;
	a = b;
	b = *aux;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}