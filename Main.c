#include <stdio.h>
int combinationNumbers(int up, int down);
int isPrime(int n);
int main()
{
	int up, down, n;
	printf("计算组合数：");
	scanf("%d%d", &up, &down);
	printf("%d\n", combinationNumbers(up, down));
	printf("判断素数：");
	scanf("%d", &n);
	if (isPrime(n))
		printf("是素数\n");
	else
		printf("不是素数\n");
	return 0;
}
int combinationNumbers(int up, int down)
{
	int a, result1 = 1, result2 = 1;
	for (a = 0; a < up; a++)
	{
		result1 *= (down - a);
	}
	for (a = up; a >= 1; a--)
	{
		result2 *= a;
	}
	
}
int isPrime(int n)
{
	int a, count=0;
	for (a = n; a >= 1; a--)
	{
		if (n%a == 0)
			count++;
	}
	if (count == 2)
		return 1;
	else
		return 0;
}
