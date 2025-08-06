#include <stdio.h>

int main() {
    int emp_id;
    float basic_salary, hra, da, tax, gross_salary, total_salary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);

    hra = 0.10 * basic_salary;
    da = 0.30 * basic_salary;
    tax = 0.05 * basic_salary;

    gross_salary = basic_salary + hra + da;

    total_salary = gross_salary - tax;

    printf("\nEmployee ID: %d\n", emp_id);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("House Rent Allowance (10%%): %.2f\n", hra);
    printf("Dearness Allowance (30%%): %.2f\n", da);
    printf("Professional Tax (5%%): %.2f\n", tax);
    printf("Total Salary: %.2f\n", total_salary);

    return 0;
}