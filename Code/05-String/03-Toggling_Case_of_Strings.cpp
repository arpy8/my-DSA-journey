#include<iostream>
using namespace std;

int main() {

	char S[] = "wElComE";
	int i;

	for (i = 0;S[i] != '\0';i++) {
		if (S[i] >= 65 && S[i] <= 90)
			S[i] += 32;
		else if (S[i] >= 97 && S[i] <= 122)
			S[i] -= 32;
	}
	printf("%s", S);

	return 0;
}