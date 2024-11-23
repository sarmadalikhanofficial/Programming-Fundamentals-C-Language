//Write a C program using if-elseif-else to input basic salary and allowances of an employee
//and calculate its Gross salary according to following: 
//Basic Salary <= 10000: HA = 20% of Basic Salary Basic Salary <= 20000: HA = 25% of Basic Salary Basic Salary > 20000: HA = 30% of Basic Salary  
//Gross salary is the final salary computed after the additions of HA (House Allowance) into the Basic Salary. 


#include <stdio.h>

int main() {
    float basicSalary, allowances, houseAllowance, grossSalary;

    // Input basic salary and allowances from the user
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    printf("Enter the allowances of the employee: ");
    scanf("%f", &allowances);

    // Calculate House Allowance (HA) based on the basic salary
    if (basicSalary <= 10000) {
        houseAllowance = 0.20 * basicSalary; // 20% of basic salary
    } else if (basicSalary <= 20000) {
        houseAllowance = 0.25 * basicSalary; // 25% of basic salary
    } else {
        houseAllowance = 0.30 * basicSalary; // 30% of basic salary
    }

    // Calculate Gross Salary
    grossSalary = basicSalary + allowances + houseAllowance;

    // Output the results
    printf("House Allowance (HA): %.2f\n", houseAllowance);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
