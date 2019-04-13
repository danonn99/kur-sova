#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
	system("chcp 1251");
	int n,cmin,m,n,c;
	printf("Въведете брой правоъгълни триъгълници:"); scanf_s("%d", &m);

	if (m<=1)
	{
		printf("Задачата няма решение!\n");
		system("pause"); return;
	}
	   a = new int*[m];
	   b = new int*[m];
      if (m>1)
	{
		for (int i = 0; i < m; i++)
		{
			printf("\n3a триъгълник номер %d:\n", i + 1);
			printf("Въведете първият катет на правоъгълния триъгълник:"); scanf_s("%d см", &a[i]); 
			printf("Въведете вторият катет на правоъгълния триъгълник:"); scanf_s("%d см", &b[i]);
			c = sqrt(a[i] * a[i] + b[i] * b[i]);
			printf("Хипотенузата на правоъгълния триъгълник е с дължина %f см.\n\n", &c);
		}
	}
	n = 0;
	cmin = sqrt(a[n] * a[n] + b[n] * b[n]);
	for (int i = 0; i < m; i++)
	{
		if (c < cmin)
		{
			cmin = c;
			n = i;
		}
	}
	delete[] a;
	delete[] b;
	printf("\n Правоъгълният триъгълник с най-дълга хипотенуза е номер %d с дължина %f см.\n\n", n + 1, cmin);
	system("pause");
}