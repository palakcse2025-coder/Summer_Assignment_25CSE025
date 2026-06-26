//Q-37
#include <stdio.h>
int main(){
    int row = 5;

    //Loop for each row
    for(int i = 1; i <= row; i++){
        
       // Print stars
        for(int j = 1; j <= (2*i-1); j++){
            print("*");
        }

        printf("\n");
    }

    return 0;
}

//Q-38
#include <stdio.h>
int main(){
    int row = 5;

    //Loop from rows to 1
    for(int i = row; i >= i; i--){

        //Print stars
        for(int j=1; j <= (2*i-1); j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

//Q-39
#include <stdio.h>
int main(){
    int row = 5;

    //Loop through rows
    for(int i = 1; i <= row; i++){

        //Print inceasing numbers
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }

        //Print decreasing numbers
        for(int j = i-1; j>=i; j--){
            printf("%d", j);
        }

        printf("\n");
    }
     
    return 0;
}

//Q-40
#include <stdio.h>
int main(){
    int row = 5;

    //Loop through row
    for(int i =1; i <= row; i++){

        //Print characters in ascending order
        for(char ch ='A'; ch < 'A'+i;ch++){
            printf("%c", ch);
        }

        //Print charcters in descending order
        for(char ch = 'A'+i-2; ch >= 'A'; ch--){
          printf("%c", ch);
       }

       printf("\n");
    }

   return 0;
}