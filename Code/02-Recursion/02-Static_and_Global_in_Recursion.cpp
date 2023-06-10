#include <stdio.h>

int x = 0; // global variable in recursion
int fun1(int n)
{
	if (n > 0)
	{
		x++;
		return fun1(n - 1) + x;
	}
	return 0;

}

int fun2(int n)
{
	static int x = 0; // static variables in recursion
	if (n > 0)
	{
		x++;
		return fun2(n - 1) + x;
	}
	return 0;

}

int main()
{
	int a = 5;
	printf("%d", fun1(a));
	printf("\n");
	printf("%d", fun2(a));
	
	return 0;
}


