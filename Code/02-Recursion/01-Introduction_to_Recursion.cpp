#include <stdio.h>


//returns 1 2 3
void head(int n)
{
	if (n > 0)
	{
		head(n - 1);
		printf("%d ", n);

	}
}

//returns 3 2 1 
void tail(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		tail(n - 1);

	}
}


int main() {
	int x = 3;

	head(x);
	printf("\n");
	tail(x);
	return 0;
}