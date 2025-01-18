#include <stdio.h>

void birthday(char[], int); //function prototype

int main()
{
    char name[] = "sxrmd";
    int age = 21;
    
    birthday(name, age);
    
    return 0;
}

void birthday(char name[], int age)
{
    printf( "\nHappy birthday dear %s" ,name);
    printf( "\nYou are %d years old!" , age);
}
