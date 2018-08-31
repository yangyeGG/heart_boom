#include <math.h>
#include <stdio.h>
#include<stdlib.h>
void delay(unsigned int);

int main()
{
	float y, x, a,j,k,l;
	while(1)
	{
		for (y = 1.5f;y > -1.5f;y -= 0.1f)
		{
			for (x = -1.5f;x < 1.5f;x += 0.05f)
			{
				a = x*x + y*y - 1;
				putchar(a*a*a - x*x*y*y*y <= 0.0f ? '*' : ' ');
			}
			putchar('\n');
		}
	delay(1);
	system("clear");
		for (j = 3.0f;j > -3.0f;j -= 0.2f)
		{
			for (k = -3.0f;k < 3.0f;k += 0.1f)
			{
				l = k*k + j*j - 1;
				putchar(l*l*l - k*k*j*j*j <= 0.0f ? '*' : ' ');
			}
			putchar('\n');
		}
	delay(1);
	system("clear");
	
	}
	return 0;
}
