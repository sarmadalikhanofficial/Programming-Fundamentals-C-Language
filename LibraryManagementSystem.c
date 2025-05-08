#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100
#define MAX_AUTHOR 100

// Structure to store book information
struct Book {
    int id;
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int isAvailable;
};

// Global variables
struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function prototypes
void addBook();
void displayBooks();
void searchBook();
void borrowBook();
void returnBook();
void displayMenu();

int main() {
    int choice;
    
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                borrowBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Thank you for using the Library Management System!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}

void displayMenu() {
    printf("\n=== Library Management System ===\n");
    printf("1. Add a new book\n");
    printf("2. Display all books\n");
    printf("3. Search for a book\n");
    printf("4. Borrow a book\n");
    printf("5. Return a book\n");
    printf("6. Exit\n");
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }
    
    struct Book newBook;
    printf("\nEnter Book Details:\n");
    printf("Book ID: ");
    scanf("%d", &newBook.id);
    
    // Check if book ID already exists
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == newBook.id) {
            printf("Book ID already exists! Please use a different ID.\n");
            return;
        }
    }
    
    printf("Title: ");
    scanf(" %[^\n]s", newBook.title);
    printf("Author: ");
    scanf(" %[^\n]s", newBook.author);
    newBook.isAvailable = 1;
    
    library[bookCount++] = newBook;
    printf("Book added successfully!\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library!\n");
        return;
    }
    
    printf("\n=== Library Books ===\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i < bookCount; i++) {
        printf("%d\t%-15s\t%-15s\t%s\n", 
               library[i].id, 
               library[i].title, 
               library[i].author,
               library[i].isAvailable ? "Available" : "Borrowed");
    }
}

void searchBook() {
    if (bookCount == 0) {
        printf("No books in the library!\n");
        return;
    }
    
    int searchId;
    printf("Enter Book ID to search: ");
    scanf("%d", &searchId);
    
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            printf("\nBook Found!\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Status: %s\n", library[i].isAvailable ? "Available" : "Borrowed");
            return;
        }
    }
    
    printf("Book not found!\n");
}

void borrowBook() {
    if (bookCount == 0) {
        printf("No books in the library!\n");
        return;
    }
    
    int borrowId;
    printf("Enter Book ID to borrow: ");
    scanf("%d", &borrowId);
    
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == borrowId) {
            if (library[i].isAvailable) {
                library[i].isAvailable = 0;
                printf("Book borrowed successfully!\n");
            } else {
                printf("Book is already borrowed!\n");
            }
            return;
        }
    }
    
    printf("Book not found!\n");
}

void returnBook() {
    if (bookCount == 0) {
        printf("No books in the library!\n");
        return;
    }
    
    int returnId;
    printf("Enter Book ID to return: ");
    scanf("%d", &returnId);
    
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == returnId) {
            if (!library[i].isAvailable) {
                library[i].isAvailable = 1;
                printf("Book returned successfully!\n");
            } else {
                printf("Book is already in the library!\n");
            }
            return;
        }
    }
    
    printf("Book not found!\n");
}
