//Q-17
#include <stdio.h>

int main(){
    int n, sum = 0;

    scanf("%d", &n);

    //Find sum of proper divisors
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
        
    return 0;    
}

//Q-18
#include <stdio.h>
int main_q18(){
    int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    //Calculate factorial of each digit
    while(temp != 0) {
        digit = temp % 10;

        int fact = 1;
        for(int i = 1; i<= digit; i++){
            fact *= i;
        }
        sum += fact;
        temp /= 10;    
    }

    //Check strong number
    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;       
 }

 //Q-19
 #include <stdio.h>
 int main() {
    int n;
    
    //Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are: ");

    //Find factors
    for(int i = 1; i <= n; i++){ 
        if (n % i == 0)
        printf("%d", i);
    }
    
    return 0;
 }

 //Q-20
#include <stdio.h>
int main() {
    int n, largest = 0;
    
    //Input Number
    printf("Enter a number: ");
     scanf("%d", &n);

    //Find prime factors
    for(int i = 2; i <=n; i++){
        while(n % i == 0){
            largest = i;
            n /= i;
         }
    } 

    printf("Largest prime factor is: %d", largest);
    
    return 0;
}