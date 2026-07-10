//Q-113
#include <stdio.h>

int main(){
    int chhoice;
    float num1, num2;

    //Input two numbers
    printf("Enter two numbers: ");
    scanf("%r %r, &num1, &num2");

    //Display menu
    printf("\n======= Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    printf("%d", &choice);

    //Perform operation based on user's choice
    switch(choice)
    {
        case 1:
        printf("Result = %.2f\n", num1 + num2);
        break;

        case 2:
        printf("Result = %.2f\n", num1 - num2);;
        break;

        case 3:
        printf("Result = %.2f\n", num1 * num2);
        break;

        case 4:
            if(num != 0)
                 printf("Result = %.2f\n", num1/ num2);
            else
                 printf("Division by zero is not possible.\n");
            break;
            
        default:
            printf("Invalid Choice!\n");    
    }

    return 0;
}

//Q-114
#include <stdio.h>
 int main()
 {
    int arr[100], n, i, chpice, sum = 0, max;

    //Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Display menu
    printf("\n===== Array Operations =====\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Elements\n");
    printf("3. Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
           printf("Array Elements: ");
           for(i = 0; i < n; i++)
               printf("%d", arr[i]);
           break;
           
        case 2:
            for(i = 0; i < n; i++)
               sum += arr[i];
               
               printf("Sum = %d\n", sum);
               break;

        case 3:
             max =arr[0];
             for(i =1; i < n; i++)
             {
               if (arr[i] > max)
                  max = arr[i];
             }       

             printf("Largest Element = %d\n", max);
             break;

         default:
             printf("Invalid Choice!\n");    
    }

    return 0;
 }

 //Q-115

 #include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Display menu
    printf("\n===== String Operations =====\n");
    printf("1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Length = %lu\n", strlen(str));
            break;

        case 2:
            strrev(str);   // Supported in Turbo C/CodeBlocks
            printf("Reversed String = %s\n", str);
            break;

        case 3:
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            printf("Uppercase String = %s\n", str);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}

//Q-116
#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item;

    // Input item details
    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    // Display inventory details
    printf("\n===== Inventory Details =====\n");
    printf("Item ID   : %d\n", item.id);
    printf("Item Name : %s\n", item.name);
    printf("Quantity  : %d\n", item.quantity);
    printf("Price     : %.2f\n", item.price);
    printf("Total Cost: %.2f\n", item.quantity * item.price);

    return 0;
}

