// do while example
// There is given the simple program of c language do while loop where we are printing the table of 1.


#include<stdio.h>  
int main(){    
int i=1;      
do{    
printf("%d \n",i);    
i++;    
}while(i<=10);  #include<stdio.h>  

int main() {    
    int table, range, i = 1; // Initialize variables
    
    // Input table number
    printf("Enter the number to print its table: ");
    scanf("%d", &table);
    
    // Input range for the table
    printf("Enter the range for the table: ");
    scanf("%d", &range);

    // Print the table using do-while
    do {    
        printf("%d x %d = %d\n", table, i, table * i);
        i++;
    } while (i <= range); // Continue until 'i' exceeds the range

    return 0;  
}
return 0;  
}
