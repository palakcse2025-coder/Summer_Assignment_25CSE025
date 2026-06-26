//Q-21
#include <stdio.h>
int main()  {
    int n, binary[32], i = 0;

    //Input decimal number
    printf("Enter decimal number: ");
    scanf("%d", &n);

    //Convert to binary
    while(n > 0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary = ");

    // This Print binary in reverse order
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}

//Q-22
#include <stdio.h>
int main() {
    long long binary;
int decimal = 0, digits, i = 0;

//Input binary number
printf("Enter binary number: ");
scanf("%lld", &binary);

//Convert binary to decimal
while(binary != 0) {
    digits = binary % 10;
    decimal += digits * pow(2, i);

    binary /= 10;
    i++;
}

printf("Decimal = %d", decimal);
return 0;
}

//Q-23
#include <stdio.h>
int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        count += n % 2; //count 1's
        n /= 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}  

//Q-24
#include <stdio.h>
int main() {
    int x, n;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d%d", &x, &n);

    for(int i = 1; i <= n; i++){
        result *= x;  //Multiply X n times
    }

    printf("%d^%d = %lld", x, n, result);
    return 0;
}  