//Q-45
#include <stdio.h>

//Function to check palindrome
int isPalindrome(int n){

    int original = n, reverse = 0, rem;

    while(n>0){
        rem = n%10;
        reverse = reverse * 10 +rem;
        n /= 10;
    }

    return original == reverse;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
       printf("Palindrome Number");
    else
       printf("Not a Palindrome Number");

    return 0;   
}

//Q-46
#include <stdio.h>
#include <math.h>

//Function to check Armstrong number
int isArmstrong(int n){
    int original = n, rem, sum = 0, digits = 0,temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0){
        rem = temp%10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
       printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;    
}

//Q-47
#include <stdio.h>

//Functio to print Fibonacci series
void fibonacci(int n){
    int a = 0,b = 1,c,i;

    for(i = 1; i <= n; i++){
        printf("%d", a);

        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

//Q-48
#include <stdio.h>

//Function to check perfect number
int isPerfect(int n){
    int i, sum = 0;

    for(i = 1; i<n; i++){
        if(n % i ==0)
        sum +=i;
    }

    return sum ==n;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPerfect(num)) 
       printf("Perfect Number");
    else
       printf("Not aPerfect Number");
       
    return 0;   
}