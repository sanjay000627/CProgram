#include<stdio.h>
int main() {
    int hours;
    char gender;
    int wage;
    int salary;

    printf("Enter number of hours worked in a week: ");
    scanf("%d", &hours);

    printf("Enter gender (M for Male / F for Female): ");
    scanf(" %c", &gender);

    if (hours > 8) {
        hours = 8;
    }

    if (gender == 'M' || gender == 'm') {
        wage = 80;
    } else if (gender == 'F' || gender == 'f') {
        wage = 60;
    } else {
        printf("Invalid gender input.\n");
        return 0;
    }

    salary = hours * wage;

    printf("Total Salary = Rs.%d\n", salary);

    return 0;
}
