#include<stdio.h>

int main() {
    // Loop for each week (4 weeks)
    for(int i = 1; i <= 4; i++) { 
        printf("Week: %d\n", i);  // Print the week number
        
        // Loop for each day in a week (7 days)
        for(int j = 1; j <= 7; j++) { 
            printf("   Day: %d\n", j);  // Print the day number
        }
        
        printf("\n");  // Add a blank line after each week for clarity
    }
    
    return 0;
}
