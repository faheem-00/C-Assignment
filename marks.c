#include<stdio.h>

int main(){
    int s1,s2,s3,s4,s5, total_marks;
    float percentage;

    printf("Enter the marks of each subject: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total_marks=s1+s2+s3+s4+s5;
    percentage= (total_marks/500.0)*100;

    printf("Total Marks of student are %d and Percentage is %.2f", total_marks, percentage);
}