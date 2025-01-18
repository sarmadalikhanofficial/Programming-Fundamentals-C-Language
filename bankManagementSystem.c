#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_ACCOUNTS 100

// Structure for account
typedef struct {
    int accountNumber;
    char accountHolderName[50];
    float balance;
    int isLocked;  // 0 for unlocked, 1 for locked
    char accountType[10];  // "Savings" or "Current"
    char accountCreationDate[20];
    char pin[5];  // User's PIN for security (stored as a string)
} Account;

// Array to store accounts
Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

// Function to get the current date as a string
void getCurrentDate(char *date) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(date, "%02d-%02d-%d %02d:%02d:%02d",
            tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
            tm.tm_hour, tm.tm_min, tm.tm_sec);
}

// Function to create a new account
void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Error: Maximum account limit reached!\n");
        return;
    }

    Account newAccount;
    newAccount.accountNumber = accountCount + 1;

    // Get account holder's name
    printf("Enter account holder name: ");
    getchar();  // Clear buffer
    fgets(newAccount.accountHolderName, 50, stdin);
    newAccount.accountHolderName[strcspn(newAccount.accountHolderName, "\n")] = 0;  // Remove newline

    // Get account type (Savings or Current)
    printf("Enter account type (Savings/Current): ");
    scanf("%s", newAccount.accountType);

    // Initialize balance
    newAccount.balance = 0.0;

    // Get account creation date
    getCurrentDate(newAccount.accountCreationDate);

    // Set account as unlocked initially
    newAccount.isLocked = 0;

    // Set a PIN for the account
    printf("Set your 4-digit PIN: ");
    scanf("%4s", newAccount.pin);

    // Store the new account in the accounts array
    accounts[accountCount] = newAccount;
    accountCount++;

    printf("Account created successfully! Account Number: %d\n", newAccount.accountNumber);
    printf("Account Created On: %s\n", newAccount.accountCreationDate);
}

// Function to find an account by account number
Account* findAccount(int accountNumber) {
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            return &accounts[i];
        }
    }
    return NULL;
}

// Function to deposit money into an account
void depositMoney() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    Account* account = findAccount(accountNumber);
    if (account == NULL || account->isLocked) {
        printf("Account not found or is locked!\n");
        return;
    }

    // Check for PIN
    char enteredPin[5];
    printf("Enter PIN: ");
    scanf("%4s", enteredPin);
    if (strcmp(enteredPin, account->pin) != 0) {
        printf("Incorrect PIN!\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount!\n");
        return;
    }

    account->balance += amount;
    char transactionDate[20];
    getCurrentDate(transactionDate);
    printf("Deposited %.2f. New balance: %.2f\n", amount, account->balance);
    printf("Transaction Date: %s\n", transactionDate);
}

// Function to view all accounts
void viewAllAccounts() {
    if (accountCount == 0) {
        printf("\nNo accounts found!\n");
        return;
    }

    printf("\n===== All Accounts =====\n");
    for (int i = 0; i < accountCount; i++) {
        Account account = accounts[i];
        printf("Account Number: %d\n", account.accountNumber);
        printf("Account Holder Name: %s\n", account.accountHolderName);
        printf("Account Type: %s\n", account.accountType);
        printf("Balance: %.2f\n", account.balance);
        printf("Status: %s\n", account.isLocked ? "Locked" : "Unlocked");
        printf("Created On: %s\n", account.accountCreationDate);
        printf("-------------------------------\n");
    }
}

// Function to withdraw money
void withdrawMoney() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    Account* account = findAccount(accountNumber);
    if (account == NULL || account->isLocked) {
        printf("Account not found or is locked!\n");
        return;
    }

    // Check for PIN
    char enteredPin[5];
    printf("Enter PIN: ");
    scanf("%4s", enteredPin);
    if (strcmp(enteredPin, account->pin) != 0) {
        printf("Incorrect PIN!\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0 || amount > account->balance) {
        printf("Invalid amount!\n");
        return;
    }

    account->balance -= amount;
    char transactionDate[20];
    getCurrentDate(transactionDate);
    printf("Withdrawn %.2f. New balance: %.2f\n", amount, account->balance);
    printf("Transaction Date: %s\n", transactionDate);
}

// Function to lock/unlock an account
void lockUnlockAccount() {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    Account* account = findAccount(accountNumber);
    if (account == NULL) {
        printf("Account not found!\n");
        return;
    }

    account->isLocked = !account->isLocked;
    printf("Account %d is now %s.\n", account->accountNumber, account->isLocked ? "Locked" : "Unlocked");
}

// Function to transfer money between accounts
void transferMoney() {
    int fromAccountNumber, toAccountNumber;
    float amount;

    printf("Enter your account number: ");
    scanf("%d", &fromAccountNumber);

    Account* fromAccount = findAccount(fromAccountNumber);
    if (fromAccount == NULL || fromAccount->isLocked) {
        printf("Account not found or is locked!\n");
        return;
    }

    // Check for PIN
    char enteredPin[5];
    printf("Enter PIN: ");
    scanf("%4s", enteredPin);
    if (strcmp(enteredPin, fromAccount->pin) != 0) {
        printf("Incorrect PIN!\n");
        return;
    }

    printf("Enter recipient account number: ");
    scanf("%d", &toAccountNumber);

    Account* toAccount = findAccount(toAccountNumber);
    if (toAccount == NULL || toAccount->isLocked) {
        printf("Recipient account not found or is locked!\n");
        return;
    }

    printf("Enter amount to transfer: ");
    scanf("%f", &amount);

    if (amount <= 0 || amount > fromAccount->balance) {
        printf("Invalid amount!\n");
        return;
    }

    fromAccount->balance -= amount;
    toAccount->balance += amount;

    printf("Transferred %.2f from Account %d to Account %d.\n", amount, fromAccountNumber, toAccountNumber);
}

int main() {
    int choice;
    while (1) {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transfer Money\n");
        printf("5. Lock/Unlock Account\n");
        printf("6. View All Accounts\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            createAccount();
        } else if (choice == 2) {
            depositMoney();
        } else if (choice == 3) {
            withdrawMoney();
        } else if (choice == 4) {
            transferMoney();
        } else if (choice == 5) {
            lockUnlockAccount();
        } else if (choice == 6) {
            viewAllAccounts();
        } else if (choice == 7) {
            printf("Exiting the system. Thank you for using the service!\n");
            break;
        } else {
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
