#include<iostream>
using namespace std;

void ReverseString(char* S)
{
	int i, temp, j;
	for (j = 0;S[j] != '\0';j++) {}
	
	j -= 1;

	for (i = 0, j;i<j;i++, j--) 
	{
		temp = S[i];
		S[i] = S[j];
		S[j] = temp;
	}
}


int main() {

	char S[] = "arpit";
	
	ReverseString(S);
	cout << S;
}