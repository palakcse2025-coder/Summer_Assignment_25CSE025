//Q-13
//Input number of terms
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Fibonacci Series: ");

    for(int i = 2; i <= n; i++){
        printf("%d",a);

        c = a + b;
        a = b;
        b =c;  
    }
    return 0;
}


//Q-14
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;

    //Input term number
    scanf("%d", &n);

    if(n == 0)
       printf("0");
    else if(n == 1)
      printf("1");
      else {
        for(int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        printf("%d", b);
      }

         return 0;
}  

//Q -15
#include <stdio.h>
int main(){
    int n, temp, digit, sum = 0;

    //Input number
    scanf("%d", &n);
    temp = n;

    //calculate summof cubes of digits
    while(temp != 0){
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
    return 0;}

    //Q-16
#include <stdio.h>
int main() {
    int start, end;

    scanf("%d,%d", &start, &end);

    printf("Armstrong number:");
    for(int i = start; i <= end; i++) {
        int temp = i, sum = 0, digits;

        while(temp != 0){
            digits = temp %10;
            sum += digits*digits*digits;
            temp /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}      