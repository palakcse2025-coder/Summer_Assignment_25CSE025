//Q-1//
#include <stdio.h>
int main(){
    int n,sum = 0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum +=i;
    }
    printf("sum = %d",sum);
    return 0;
 }

 //Q-2//
 #include <stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=10; i++){
        printf("%d*%d = %d\n",n, i, n*i);
    }

    return 0;
 }

 //Q-3//
 #include <stdio.h>

 int main() {
    int n;
    long long fact =1;

    scanf("%d",&n);

    for(int i =1;i<=n;i++){
        fact *= i;
    }
    printf("Factorial = %lld", fact);
    return 0;
 }

 //Q-4//
 #include <stdio.h>

 int main() {
    int n, count = 0;

    scanf("%d", &n);

    while(n != 0){
        count++;
        n /= 10;
    }

    printf("Digits = %d", count);
    return 0;
 }