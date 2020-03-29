#include <stdio.h>
#include<stdlib.h>
#define max 100
int st[max];
int vf = -1;
void Push(int x)
{
	if (vf == max - 1)
		printf("Stiva este plina\n");
	st[++vf] = x;
}
int Pop()
{
	if (vf == -1)
		return -1;
	else
		return st[vf--];
}
void Print()
{
	int i;
	printf("Stiva:");
	for (i = 0; i <= vf; i++)
		printf("%d ", st[i]);
	printf("\n");
}
int main()
{
	int n, c, i, k = 0, v[101], b[8] = { 0 }, j, aux = 0;
	printf("Introduceti numarul:");
	do
	{
		scanf("%d", &c);

	} while (c<0||c>7);
	printf("Introduceti numarul:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
		aux = v[i];
		while (v[i] != 0)
		{
			b[k++] = v[i] % 2;
			v[i] = v[i] / 2;
		}
		for (j = k - 1; j >= 0; j--)
			if (b[j] == 1 && j == c)
			{
				Push(aux);
			}
		k = 0;
	}
		Print();
	system("pause");
	return 0;
}