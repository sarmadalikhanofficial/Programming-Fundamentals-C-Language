#include <stdio.h>

int main(void)
{
    char name[50], fatherName[50], address[100], gender[10];
    int dd, mm, yyyy;
    long int cell1, cell2;
    long int cnic1, cnic2;
    int cnic3;
    char hscCollege[100], sscSchool[100];
    int hscYear, sscYear;

    // Prompt user for input
    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    printf("Enter your father's name: ");
    scanf(" %[^\n]", fatherName);

    printf("Enter your date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yyyy);

    printf("Enter your address: ");
    scanf(" %[^\n]", address);

    printf("Enter your cell phone number (format: cell1-cell2): ");
    scanf("%ld-%ld", &cell1, &cell2);

    printf("Enter your CNIC number (format: cnic1-cnic2-cnic3): ");
    scanf("%ld-%ld-%d", &cnic1, &cnic2, &cnic3);

    printf("Enter your gender: ");
    scanf(" %[^\n]", gender);

    printf("Enter your HSC (College\\Board): ");
    scanf(" %[^\n]", hscCollege);

    printf("Enter your HSC Year: ");
    scanf("%d", &hscYear);

    printf("Enter your SSC (School\\Board): ");
    scanf(" %[^\n]", sscSchool);

    printf("Enter your SSC Year: ");
    scanf("%d", &sscYear);

    // Print the resume
    printf("\n****************************RESUME****************************");
    printf("\n******************************CV******************************");
    printf("\n**************************************************************");
    printf("\n==============================================================");
    printf("\nName : %s", name);
    printf("\nFathers Name : %s", fatherName);
    printf("\nDate of Birth : %d-%d-%d", dd, mm, yyyy);
    printf("\nAddress : %s", address);
    printf("\nCell Phone : 0%ld-%ld", cell1, cell2);
    printf("\nCNIC : %ld-%ld-%d", cnic1, cnic2, cnic3);
    printf("\nGender : %s", gender);
    printf("\nHSC (College\\Board) : %s", hscCollege);
    printf("\nHSC Year :  %d", hscYear);
    printf("\nSSC (School\\Board) : %s", sscSchool);
    printf("\nSSC Year :  %d", sscYear);

    return 0;
}
