/*
Imagine you are developing a student grading system for a school. 
The school has multiple classes, each with a fixed number of students, and each student has grades for multiple subjects. 
To efficiently manage this data, you decide to use a multi-dimensional array to store the student information.
Design the data structure for the multi-dimensional array to store student grades. Consider that there are N classes, each with M students, and each student has grades for P subjects.*/

#include <stdio.h>

int main() {
    int n, m, p;//N-->No of Classes M-->No of student 
    printf("Enter the number of classes: ");
    scanf("%d", &n);
    printf("Enter the number of students in classes: ");
    scanf("%d", &m);
    printf("Enter the number of subjects (1-5): ");
    scanf("%d", &p);
    printf("\nEnter Grade(O,E,A,B,F)\n");

    char data[n][m][p];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                printf("Enter Grade for Class %d Student %d Subject %d: ", i + 1, j + 1, k + 1);
                scanf(" %c", &data[i][j][k]);  
            }
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("For Class %d:\n", i + 1);
        for (int j = 0; j < m; j++) {
            printf("\tFor Student %d:-----\n", j + 1);
            for (int k = 0; k < p; k++) {
                printf("\tGrade for Subject %d is: %c\n", k + 1, data[i][j][k]);
            }
        }
    }

    return 0;
}
