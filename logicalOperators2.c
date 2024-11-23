#include <stdio.h>

int main() {
    int mathScore = 80;
    int scienceScore = 65;

    // Check if the student has passed both subjects
    if (mathScore >= 50 && scienceScore >= 50) {
        printf("The student has passed in both subjects.\n");
    } else {
        printf("The student has not passed in both subjects.\n");
    }

    // Check if the student has failed at least one subject using NOT operator
    if (!(mathScore >= 50 && scienceScore >= 50)) {
        printf("The student has failed in at least one subject.\n");
    } else {
        printf("The student has not failed any subject.\n");
    }

    // Check if the student has passed at least one subject
    if (mathScore >= 50 || scienceScore >= 50) {
        printf("The student has passed in at least one subject.\n");
    } else {
        printf("The student has failed in both subjects.\n");
    }

    // Check if the student has failed in both subjects using NOT operator
    if (!(mathScore >= 50 || scienceScore >= 50)) {
        printf("The student has failed in both subjects.\n");
    } else {
        printf("The student has not failed in both subjects.\n");
    }

    return 0;
}
