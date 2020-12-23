#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double s, a, b, c, p;
	printf("please input the a, b, c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b > c && a + c > b && c + b > a)
	{
		p = (a + b + c);
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("s=%lf", s);
		printf("a = % 7.2f, b = % 7.2f, c = % 7.2f, s = % 7.2lf\n", a, b, c, s);
	}
	else printf("a, b, c不能构成三角形\n");
	return 0;
}
