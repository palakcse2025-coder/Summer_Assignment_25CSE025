//Q-29
#include <stdio.h>
int main(){
    int rows;

    printf("Ebter number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int j=1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//Q-30
#include <stdio.h>
int main(){
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i=1; i<=rows; i++){

        for (int j=1; j<=i; j++){
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}

//Q-31
#include <stdio.h>
int main(){
    int rows;

    printf("Enter number of rows");
    scanf("%d", &rows);

    for( int i=1; i<=rows; i++){

        for(char ch = 'A'; ch < 'A'+i; ch++){
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}

//Q-32
#include <stdio.h>
int main(){
    int i,j;

    //Outer loop for rows
    for (i=1; i<=5; i++){

        //Print row number i, i times
        for(j=1; j<=i; j++){
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}