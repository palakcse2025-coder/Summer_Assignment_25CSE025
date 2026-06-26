//Q-9
#include <stdio.h>
int main(){
    int n, Prime = 1;

    //Read the number
    scanf("%d",&n);

    //Number less than 2 are not prime
    if(n < 2){
        Prime = 0;

        //Check divisibility
        for(int i = 2; i<=n/2; i++){
            if(n%i == 0){
                Prime = 0;
                break;
            }
        }

    //Display result
    if(Prime)
       printf("Prime Number");
    else
       printf("Not a Prime Number");
       return 0;
}
}

//Q-10
#include <stdio.h>
int main(){
    int start, end, i, j, Prime;

    printf("Enter starting number: ");
    scanf("%d",&start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n ",start, end);

    for (i = start; i <= end; i++){
        if (i <=1)
            continue;

        Prime = 1;

        //Check whether i is prime
        for(j = 2; j<= i/2; j++){
            if(i%j ==0){
                Prime = 0;
                break;
            }
        }

        if(Prime)
           printf("%d", i); 
    }

     return 0;
    }

//Q-11
#include <stdio.h>
int main() {
    int n1, n2, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    //Find the smaller number
    int min = (n1 < n2) ? n1 : n2;

    //Find GCD
    for(i = 1; i <= min; i++){
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
     printf("GCD of %d and %d = %d", n1, n2, gcd);

     return 0;
}

//Q-12
#include <stdio.h>
int main() {
    int n1, n2, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    //Start checking fromm the greater number 
    max = (n1 > n2) ? n1 : n2;

    while (1){
        if (max % n1 == 0 && max % n2 == 0){
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d = %d", n1, n2, lcm);

      return 0;

}  