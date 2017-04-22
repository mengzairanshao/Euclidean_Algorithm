#include<stdio.h>
int main()
{
	int a, b, u, r;
	printf("辗转相除法求两个数的最小公倍数与最大公约数.\n请输入两个数,以空格隔开:\n");
	scanf_s("%d %d", &a, &b);
	u = a*b;
	do
	{
		r = a%b;
		a = b;
		b = r;
	} while (r);
	printf("两数的最大公约数为:%d,\n最小公倍数为:%d\n", a, u / a);
}
