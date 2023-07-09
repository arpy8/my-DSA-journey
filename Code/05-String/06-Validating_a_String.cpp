#include<iostream>
using namespace std;

int StringValidator(char *S)
{
	for (int i = 0;S[i] != '\0';i++) {
		if (!(S[i] >= 'a' && S[i] <= 'z') && !(S[i] >= 'A' && S[i] <= 'Z'))
			return 0;
	}
	return 1;
}

int main() {

	char S[] = "wElComE";
	cout << StringValidator(S);
}