#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int power(base, exponent);
int main(void)
{
	int base,exponent;
	printf("請輸入兩個數");
	scanf_s("%d %d", &base, &exponent);
	printf("%d", power(base,exponent));
	system("pause");
	return 0;
}
int power(int base, int exponent)
{
	if (exponent > 1)
	{
		return  base*(power(base,exponent-1));
	}
	else
	{
		return base;
	}

}