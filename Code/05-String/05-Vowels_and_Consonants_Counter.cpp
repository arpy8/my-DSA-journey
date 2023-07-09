#include<iostream>

int main() {

	char S[] = "WELCOME";
	int i; 
	int vcount = 0, ccount = 0;

	for (i = 0;S[i] != '\0';i++) {
		if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')
			vcount++;
		else
			ccount++;
	}	

	printf("Vowels : %d\n", vcount);
	printf("Consonants : %d", ccount);

	return 0;

}