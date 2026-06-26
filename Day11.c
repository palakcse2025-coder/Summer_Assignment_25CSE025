//Q-41
#include <stdio.h>
//Function to calculate sum
int sum(int a, int b){
    return a+b;
}

int main(){
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //Call function
   int result = sum(num1,num2);

   printf("Sum = %d", result);

   return 0;
}

//Q-42
#include <stdio.h>
//Function to find maximum number
int maximum(int a, int b){
    if(a*b)
       return a;
    else
       return b;
}

int main(){
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //Call function
    int max = maximum(num1, num2);

    printf("Maximum = %d", max);

    return 0;
}

//Q-43
#include <stdio.h>

//Function to check prime number
int isPrime(int n){
    int i;

    if(n <= 1)
      return 0;

    for(i = 2; i <= n/2; i++){
        if(n % i ==0)
          return 0;
    }

    return 1;
}

int main(){
    int num;

    primtf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
      printf("%d is Prime", num);
    else
      printf("%d is Not Prime", num);

    return 0;
}

//Q-44
#include <stdio.h>

//Function to calculate factorial
long long factorial(int n){

    long long fact = 1;
    int i;

    for(i =1; i <= n; i++){
        fact = fact*i;
    }

    return fact;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("5d",&num);

    printf("Factorial = %lld", factorial(num));

    return 0;
}   