//Q-105

#include <stdio.h>

int main() {
    int roll;
    char name[50];
    float marks;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Display student record
    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks       : %.2f\n", marks);

    return 0;
}

//Q-106

#include <stdio.h>

int main() {
    int empId;
    char name[50];
    float salary;

    //Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &empID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    //Display employee details
    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n", empID);
    printf("Name        : %s\n", name);
    printf("Salary      : %.2f\n", salary);

    return 0;
}

//Q-107

#include <stdio.h>

int main(){
    float basic, hra, da, gross;

    //Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    //Calculate HRA (20%)
    hrs = basic * 0.20;

    //Calculate DA (10%)
    da = basic * 0.10;

    //Calculate Gross Salary
    gross = basic + hra + da;

    //Display salary details
     printf("\n----- Salary Details -----\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", gross);

    return 0;
}

//Q-108

#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Input student details
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    // Input marks
    printf("Enter Marks of 5 Subjects:\n");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Display marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("-------------------------------\n");
    printf("Subject 1 : %.2f\n", m1);
    printf("Subject 2 : %.2f\n", m2);
    printf("Subject 3 : %.2f\n", m3);
    printf("Subject 4 : %.2f\n", m4);
    printf("Subject 5 : %.2f\n", m5);
    printf("-------------------------------\n");
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    // Display grade
    if (percentage >= 90)
        printf("Grade      : A+\n");
    else if (percentage >= 75)
        printf("Grade      : A\n");
    else if (percentage >= 60)
        printf("Grade      : B\n");
    else if (percentage >= 40)
        printf("Grade      : C\n");
    else
        printf("Grade      : Fail\n");

    return 0;
}