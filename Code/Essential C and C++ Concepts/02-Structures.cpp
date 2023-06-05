#include <iostream>
using namespace std;

struct Student 
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];

};

struct Card
{
    int face;
    int shape;
    int colour;
} a, b, c; // objects can be declared here too! 


int main()
{
    struct Student s1 = {1, "Arpit", "PCM", "India"}; // declaration and initializing in a single line
    printf("Roll No. : %d\nName : %s\nDepartment : %s\nAddress : %s\n\n", s1.roll, s1.name, s1.dept, s1.address);
  
    // declaration 
    struct Card c;

    // initialization
    c.face = 1;
    c.shape = 0;
    c.colour = 2;

    // declaring an array of structs
    struct Card deck[52];

}
 