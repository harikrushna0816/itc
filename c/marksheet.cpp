#include <stdio.h>

#define NUM_SUBJECTS 5


int calculateTotal(int marks[]) {
    int total = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        total += marks[i];
    }
    return total;
}
float calculatePercentage(int total) {
    return (float)total / NUM_SUBJECTS;
}

int main() {
    char studentName[50];
    int marks[NUM_SUBJECTS];
    printf("Enter student name: ");
    scanf("%s", studentName);
    printf("Enter marks for each subject:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int totalMarks = calculateTotal(marks);
    float percentage = calculatePercentage(totalMarks);

    
    printf("\nMark Sheet\n");
    printf("-----------\n");
    printf("Student Name: %s\n", studentName);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}

