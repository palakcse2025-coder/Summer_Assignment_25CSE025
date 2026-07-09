//Q-101

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    //Generate random number
    strand(time(0));
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
    
        if(guess > number)
           printf("Too High! Try Again.\n");

        else if (guess < number)
           printf("Too Low! try Again.\n");
        else
           printf("Congratulations! You guessed the correct number.\n");
           
    } while (guess != number);

    return 0;

}

#include <stdio.h>

int main() {
    int age;

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18)
        printf("You are Eligible to Vote.");
    else
        printf("You are Not Eligible to Vote.");

    return 0;
}

#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            // Display balance
            printf("Current Balance = %.2f\n", balance);
            break;

        case 2:
            // Deposit money
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            balance += amount;

            printf("Amount Deposited Successfully.\n");
            printf("Updated Balance = %.2f\n", balance);
            break;

        case 3:
            // Withdraw money
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("Withdrawal Successful.\n");
                printf("Remaining Balance = %.2f\n", balance);
            }
            else {
                printf("Insufficient Balance.\n");
            }
            break;

        case 4:
            printf("Thank You for Using ATM.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("===== Simple Quiz =====\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 2
    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. HTML\n2. C\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 3
    printf("\nQ3. 5 + 10 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n4. 20\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 4
    printf("\nQ4. Which is the largest planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 5
    printf("\nQ5. Which keyword is used to end a function and return a value?\n");
    printf("1. break\n2. continue\n3. return\n4. exit\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Display score
    printf("\n=========================\n");
    printf("Your Score = %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}