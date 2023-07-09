#include<iostream>
using namespace std;

void IsDuplicates(char* S)
{
	int i, temp, j;
	for (j = 0;S[j] != '\0';j++) {}


	for (i = 0;i != '\0';i++, j--)
	{
		if (S[i] == S[j])
			i++, j--;
		else 
			break;
	}
	cout << i << endl;
}


int main()  

	char S[] = "araa";

	IsDuplicates(S);
	cout << S;
}