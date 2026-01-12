#include <stdio.h>

int main() {
    int numSubjects;
    double marks[10];
    double total = 0, average;
    char grade;
    
    printf("=== Grade Calculator ===\n\n");
    printf("Enter number of subjects (max 10): ");
    scanf("%d", &numSubjects);
    
    if (numSubjects <= 0 || numSubjects > 10) {
        printf("Invalid number of subjects!\n");
        return 1;
    }
    
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d (0-100): ", i + 1);
        scanf("%lf", &marks[i]);
        total += marks[i];
    }
    
    average = total / numSubjects;
    
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    printf("\n=== Results ===\n");
    printf("Total Marks: %.2lf\n", total);
    printf("Average: %.2lf\n", average);
    printf("Grade: %c\n", grade);
    
    if (average >= 60) {
        printf("Status: PASS\n");
    } else {
        printf("Status: FAIL\n");
    }
    
    return 0;
}
