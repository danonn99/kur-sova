#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
	system("chcp 1251");
	int n,cmin,m,n,c;
	printf("�������� ���� ����������� �����������:"); scanf_s("%d", &m);

	if (m<=1)
	{
		printf("�������� ���� �������!\n");
		system("pause"); return;
	}
	   a = new int*[m];
	   b = new int*[m];
      if (m>1)
	{
		for (int i = 0; i < m; i++)
		{
			printf("\n3a ���������� ����� %d:\n", i + 1);
			printf("�������� ������� ����� �� ������������ ����������:"); scanf_s("%d ��", &a[i]); 
			printf("�������� ������� ����� �� ������������ ����������:"); scanf_s("%d ��", &b[i]);
			c = sqrt(a[i] * a[i] + b[i] * b[i]);
			printf("������������ �� ������������ ���������� � � ������� %f ��.\n\n", &c);
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
	printf("\n ������������� ���������� � ���-����� ���������� � ����� %d � ������� %f ��.\n\n", n + 1, cmin);
	system("pause");
}