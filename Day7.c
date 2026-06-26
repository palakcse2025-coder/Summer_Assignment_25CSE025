//Q-25
#include <stdio.h>
    //Functioning to calculATE factorial recursively
     int factorial(int n){
        if(n == 0 || n == 1)
        return 1;

        return n*factorial(n-1);
     }

     int main(){
        int n;

        printf("Enter a number: ");
        scanf("%d", &n);

        printf("Factorial = %d", factorial(n));
     
    return 0;
}

//Q-26
#include <stdio.h>
//Recursive Fibonacci function
int Fibonacci(int n){
    if(n == 0)
      return 0;
    if(n == 1)
      return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n;

    printf("Enter position: ");
    scanf("%d", &n);

    printf("Fibonacci number = %d", Fibonacci(n));

    return 0;
}

//Q-27
#include <stdio.h>
//Recursive function to find sum of digits
int sumDigits(int n){
    if(n == 0)
       return 0;
    return(n % 10) + sumDigits(n /10);
}

 intmain(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumDigits(n));

    return 0;
 }

 //Q-28

 #include <stdio.h>

 int reverse = 0;
 //Recursive function
 void reverseNumber(int n){
    if(n == 0)
     return 0;
    
    reverse = reverse * 10 + n % 10;
    reverseNumber(n / 10); 
 }

 int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d, &n");

    reverseNumber(n);

    printf("Reversed number = %d", reverse);

    return 0;
 }