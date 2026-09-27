/* Averages grades entered until -1 is input. */
#include <stdio.h>

int main() {
    float grade, total = 0, average;
    int count = 0;

    for (;;) {
        printf("Enter grade: ");
        scanf("%f", &grade);

        if (grade == -1)
            break;

        total += grade;
        count++;
    }

    average = total / count;

    printf("Average grade = %.2f\n", average);

    return 0;
}
