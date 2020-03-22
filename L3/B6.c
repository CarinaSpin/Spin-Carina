//Se citeste de la tastatura un numar zecimal pana in 255. Sa se afiseze forma binara a numarului 
//iar apoi din sirul binar sa se genereze valoarea maxima.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n = 0, k = 0, i, b[8] = { 0 }, j, aux, s = 0, nr = 0;
	printf("Introduceti numarul:");
	scanf("%d", &n);
	while (n != 0)
	{
		b[k++] = n % 2;
		n = n / 2;
	}
	printf("Transformarea numarului in binar este: ");
	for (i = 7; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");
	for (i = 0; i < 7; i++)
		for (j = i + 1; j <= 7; j++)
			if (b[i] < b[j])
			{
				aux = b[i];
				b[i] = b[j];
				b[j] = aux;
			}
	printf("Valoarea maxima este: ");
	for (i = 0; i <= 7; i++)
		printf("%d", b[i]);
	printf("\n");
	nr = 7;
	printf("Valoarea maxima in zecimal: ");
	for (i = 0; i <= 7; i++)
		if (b[i] == 1)
		{
			s = s + pow(2, nr);
			nr--;
		}
		else
			nr--;
	printf("%d\n", s);
	system("pause");
	return 0;

}