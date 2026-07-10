//Q-109
#include <stdio.h>
int main(){
    int bookId;
    char bookName[50], author[50];
    int quantity;

    //Input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", author);

    printf("Enter Author Name: ");
    scanf("%[^\n]", author);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    //Display book details
      printf("\n------ LIBRARY RECORD ------\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Name   : %s\n", bookName);
    printf("Author Name : %s\n", author);
    printf("Quantity    : %d\n", quantity);

  return 0;  
}

//Q-110
#include <stdio.h>
#include <string.h>

//Structure to store bank account details
struct BankAccount{
  int accNo;
  char name[50];
  float balance;
};

int main() {
  struct BankAccount account;
  int choice;
  float amount;

  //Input accountt details
  printf("======= BANK ACCOUNT MANAGEMENT SYSTEM========\n");

  printf("Enter Account number: ");
  scanf("%d", &account.accNo);

  printf("Enter account Holder Name: ");
  scanf(" %[^\n]", &account.name);

  printf("Enter Initial Balance: ");
  scanf("%f", &account.balance);

  // Menu-driven program
  do
  {
     printf("\n======== MENU =========\n");
     printf("1. Deposit Money\n");
     printf("2. Withdraw Money\n");
     printf("3. Check Balance\n");
     printf("4. Display Account Details\n");
     printf("5. Exit\n");

     switch(choice)
     {
      case 1:
          // Deposit money
          printf("Enter amount to deposit: ");
          scanf("%f", &amount);

          account.balance += amount;

          printf("Amount deposited successfully!\n");
          printf("Updated Balance = %.2f\n", account.balance);
          break;

      case 2:
           //withdraw money
           printf("Enter amount to withdraw: ");
           svanf("%f", &amount);
           
           if (amount <= account.balance)
           {
            account.balance -= amount;
            printf("Withdrawal successful!\n");
            printf("Remaining Balance = %.2f\n", account.balance)
           }
           else{
            printf("Insufficient Balance!");
           }
           break;

      case 3:
          //Display current balance
          printf("Current Balance = %.2f\n", account.balance);
          break;

      case 4:
          //Display complete account information
          printf("\n------ACCOUNT DETAILS --------\n");
          printf("Account Number: %d\n", account.accNo);
          printf("Account Holder: %s\n", account.name);
          printf("Balance: %.2f\n", account.balance);
          break;
      case 5:
      //Exit program
      printf("Thank you for using Bank Account Management System;\n");
      break;
      
      default:
      printf("Invalid Choice! Please try again,\n");
     }
  }while(choice != 5);

   return 0;
}

#include <stdio.h>

int main()
{
    char name[50];
    int seats;
    float price, total;

    // Input customer details
    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("Enter Ticket Price: ");
    scanf("%f", &price);

    // Calculate total amount
    total = seats * price;

    // Display booking details
    printf("\n----- Ticket Details -----\n");
    printf("Customer Name : %s\n", name);
    printf("Seats Booked  : %d\n", seats);
    printf("Total Amount  : %.2f\n", total);

    return 0;
}

//Q-112
#include <stdio.h>

struct contact
{
  char name[50];
  char phone[15];
};

int main()
{
  struct contact c;

  //Input contact details
  printf("Enter Name: ");
  scanf("%c", c.name);

  printf("Enter Phone Number: ");
  scanf("%s", c.phone);

  //Display contact details
  printf("\n----- Contact Details------\n");
  printf("Name         : %s\n", c,name);
  printf("Phone Number : %s\n", c.phone);

  return 0;
}