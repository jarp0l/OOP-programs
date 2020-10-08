/* 
 * Task #2:
 * WAP in C to input the name, roll, marks and address of n students entered by the user and display the
 * entered details using the concept of structure.
 */
#include <stdio.h>

struct Student {
    char name[20];
    char address[20];
    int roll;
    float marks;
};

int main() {
    struct Student student[500];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nFor student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", student[i].name);
        printf("Roll number: ");
        scanf("%d", &student[i].roll);
        printf("Marks: ");
        scanf("%f", &student[i].marks);
        printf("Address: ");
        scanf("%s", student[i].address);
    }

    printf("\n----------\n\nDetails of students:\n");
    for(int i = 0; i < n; i++){
        printf("\nFor student %d:\n", i+1);
        printf("Name: %s\n", student[i].name);
        printf("Roll number: %d\n", student[i].roll);
        printf("Marks: %.2f\n", student[i].marks);
        printf("Address: %s\n", student[i].address);
    }

    return 0;
}