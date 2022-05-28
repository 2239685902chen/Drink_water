#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int q = 10000, h = 0, r = 0, e = 0;
	double w = 3.14, t = 0, y = 0;
	scanf("%d%d", &h, &r);
	e = pow(r, 2);
	t = w * (double)h * (double)e;
	y = (double)q / t;
	if (y - (int)y != 0)
	{
		y++;
	}
	printf("%d\n", (int)y);
	return 0;
}