#include<iostream>
using namespace std;

int main() {
	
	char S[] = "welcome";
	int i;

	for (i = 0;S[i] != '\0';i++) {}
	cout << "Length of the string is " << i;

	return 0;
}