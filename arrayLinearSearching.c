int numbers[5] = {10, 20, 30, 40, 50};
int searchValue = 30;
int found = 0;

for (int i = 0; i < 5; i++) {
    if (numbers[i] == searchValue) {
        printf("Value %d found at index %d\n", searchValue, i);
        found = 1;
        break;
    }
}

if (!found) {
    printf("Value not found\n");
}
