#include<stdio.h>

int main(){
    int b_salary, d_a, hra, gross_salary;

    printf("Enter the basic salary amount: ");
    scanf("%d", &b_salary);

    d_a=(b_salary/100)*40;
    hra=(b_salary/100)*20;

    gross_salary= b_salary+d_a+hra;
    printf("Your Gross Salary = %d", gross_salary);
}