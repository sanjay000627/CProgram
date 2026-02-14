#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, m6;
    float total, percentage;

    
    printf("Enter 6 subject marks:\n");
    scanf("%f %f %f %f %f %f", &m1, &m2, &m3, &m4, &m5, &m6);

    
    total = m1 + m2 + m3 + m4 + m5 + m6;
    percentage = total / 6;

    
    if (percentage >= 95)
        printf("Grade A");
    else if (percentage >= 85)
        printf("Grade B");
    else if (percentage >= 75)
        printf("Grade C");
    else if (percentage >= 65)
        printf("Grade D");
    else if (percentage >= 45)
        printf("Grade E");
    else
        printf("Grade F");

    return 0;
}
