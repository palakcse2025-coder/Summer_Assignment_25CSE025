//q-117
#include <stdio.h>

int main() {
    int roll[50], n, i;
    char name[50][30];
    float marks[50];

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display records
    printf("\n=========== STUDENT RECORDS ===========\n");

    printf("\nRoll\tName\t\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n",
               roll[i], name[i], marks[i]);
    }

    return 0;
}

//Q-118
#include <stdio.h>

int main() {

    int id[20], quantity[20];
    char title[20][50];
    char author[20][50];
    int n, i;

    //Input number of books
    printf("Enter number of books: ");
    scanf("%d", &n);

    //Input details
    for(i = 0; i < n; i++) [
         
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &id[i]);

        printf("Book Title: ");
        scanf("%[^\n]", title[i]);

        printf("Author Name: ");
        scanf("%[^\n]", author[i]);

        printf("Quantity: ");
        scanf("%d", &quantity[i]);
    ]

    //Display library records``
    printf(i = 0; i < n; i++) {

        printf("\nBook %d\n", i + 1);

        printf("Book ID  : %d\n", id[i]);
        printf("Title    : %d\n", title[i]);
        printf("Author   : %d\n", author[i]);
        printf("Quantity : %d\n", quantity[i]);
    }

    return 0;
}

//Q-120
#include <stdio.h>

int main() {
    int empId[20], age[20], n, i;
    char name[20][50];
    float salary[20];

    // Input number of employees
    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {

        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Age: ");
        scanf("%d", &age[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n========== EMPLOYEE RECORDS ==========\n");

    printf("\nID\tName\t\tAge\tSalary\n");

    for(i = 0; i < n; i++) {

        printf("%d\t%s\t\t%d\t%.2f\n",
               empId[i], name[i], age[i], salary[i]);
    }

    return 0;
}

//Q-120
#include <stdio.h>

// Function to input student details
void inputData(int roll[], char name[][50], float marks[], int n) {
    int i;

    for(i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}

// Function to display student details
void displayData(int roll[], char name[][50], float marks[], int n) {

    int i;

    printf("\n========== STUDENT RECORD ==========\n");

    printf("\nRoll\tName\t\tMarks\n");

    for(i = 0; i < n; i++) {

        printf("%d\t%s\t\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

// Function to find topper
void findTopper(int roll[], char name[][50], float marks[], int n) {

    int i, index = 0;

    for(i = 1; i < n; i++) {

        if(marks[i] > marks[index])
            index = i;
    }

    printf("\n========== TOPPER ==========\n");
    printf("Roll Number : %d\n", roll[index]);
    printf("Name        : %s\n", name[index]);
    printf("Marks       : %.2f\n", marks[index]);
}

int main() {

    int n;

    int roll[20];
    char name[20][50];
    float marks[20];

    // Input number of students
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Call functions
    inputData(roll, name, marks, n);

    displayData(roll, name, marks, n);

    findTopper(roll, name, marks, n);

    return 0;
}