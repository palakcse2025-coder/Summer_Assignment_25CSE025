//Q-33
#include <stdio.h>

int main(){
    int i, j;
  //Outer loop controls rows
  for(i=5; i>=1; i--){

    //Print stars in each row
    for(j=1; j<=i; j++){
        printf("* ");
    }

    printf("\n");
  }
    return 0;
}

//Q-34
#include <stdio.h>
int main(){
    int i, j;

    //Rows decrease from from 5 to 1
    for(i=5; i>=1; i--){

        // Print numbers from 1 to i
        for(j=1; j<=i; j++){
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

//Q-35
#include <stdio.h>
int main(){
    int i, j;
    char ch = 'A';

    //Loop for rows
    for (i=1; i<=5; i++){

        //Print same character i times
        for (j=1; j<=i; j++){
            printf("%c", ch);
        }

        printf("\n");
        ch++;
    }

    return 0;
}

//Q-36
#include <stdio.h>
int main(){
    int i, j;
    int size = 5;

    //Loop through rows
    for(i=1; i<= size; i++){

        //Loop through columns
        for(j=1; j<=size; j++){

            //Print star at borders
            if(i==1 || i==size || j==1|| j==size)
            {
                printf("*");
            }
            else
            {
                printf(" ");    
            }
        }
        printf("\n");
    }
    return 0;
}