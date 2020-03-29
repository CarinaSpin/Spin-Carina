#include <stdio.h>
#include <stdlib.h>
#define max 100
int st[max];
int st1[max];
int vf = -1;
int vf1 = -1;
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
	printf("Stiva 1: ");
	for (i = 0; i <= vf; i++)
		printf("%d ", st[i]);
	printf("\n");
}
void Push1(int x)
{
	if (vf1 == max - 1)
		printf("Stiva este plina\n");
	st1[++vf1] = x;
}
void Print1()
{
	int i;
	printf("Stiva 2: ");
	for (i = 0; i <= vf1; i++)
		printf("%d ", st1[i]);
	printf("\n");
}
int prim(int n)
{
	int i;
	if (n < 2)
		return 0;
	for (i = 2; i <= n / 2; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
int binar(int n)
{
	int k = 0, i,nr=0,p=1 ;
	while (n != 0)
	{
		nr = nr + n % 2 * p;
		n = n / 2;
		p = p * 10;
	}
	return nr;
}
int main()
{
	int i = 0, k = 0, b[8] = { 0 };
	for(i=0;i<=50;i++)
	{
		Push(i);
		if (prim(i) == 1)
		{	
			Pop();
			k = binar(i);
			Push1(k);
		}
	} 
	Print();
	Print1();
	system("pause");
	return 0;
}