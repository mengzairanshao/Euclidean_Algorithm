#include<stdio.h>
int main()
{
	int a, b, u, r;
	printf("շת�����������������С�����������Լ��.\n������������,�Կո����:\n");
	scanf_s("%d %d", &a, &b);
	u = a*b;
	do
	{
		r = a%b;
		a = b;
		b = r;
	} while (r);
	printf("���������Լ��Ϊ:%d,\n��С������Ϊ:%d\n", a, u / a);
}
