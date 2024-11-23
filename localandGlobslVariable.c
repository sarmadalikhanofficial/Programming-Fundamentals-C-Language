#include <stdio.h>

int globalVar = 100;  // Global variable

void display() {
    int localVar = 50;  // Local variable
    printf("Inside display function:\n");
    printf("localVar = %d\n", localVar);
    printf("globalVar = %d\n", globalVar);
}

int main() {
    int mainVar = 25;  // Local variable
    printf("Inside main function:\n");
    printf("mainVar = %d\n", mainVar);
    printf("globalVar = %d\n", globalVar);
    display();
    return 0;
}
