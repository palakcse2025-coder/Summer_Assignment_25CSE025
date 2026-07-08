//Q-89
#include <stdio.h>

int main(){
    char str[100];
    int i,j, count;

    //Input string
    printf("Enter a string: ");
    gets(str);

    //Check each character
    for(i=0; str[i] != '\0'; i++){
        -
        count = 0;

        for(j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j])
               count++;
        }

        if(count == 1){
            printf("First Non-repeating Character = %c", str[i]);
            return 0;
        }
    }

    printf("No Non-Repeating Character Found");

    return 0;
}

//Q-90

#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    //Input string
    printf("Enter a string: ");
    gets(str);

    //Find first repeating character
    for(i = 0; str[i] != '\0'; i++){

        for(j=i +1; str[j] != '\0'; j++) {

            if(str[i] == str[j]){
                printf("First Reporting Character = %c", str[i]);
                return 0;
            }
        }
     }

     printf("No Repeating Character found");

        return 0;
     }    

     //Q-91
     #include <stdio.h>

     int main(){
        char str1[100], str2[100];
        int i, j, count1[250] = {0}, count2[256] = {0};

        //Input first string
        printf("Enter first string: ");
        gets(str1);

        //Input second string
        printf("Enter second string: ");
        gets(str2);

        //Input second string
        printf("Enter second string: ");
        gets(str2);

        //count frequency of each character
        for(i = 0; str1[i] != '\0'; i++)
           count1[(int)str1[i]]++;

        for(i=0; str2[i] != '\0'; i++)
           count2[(int)str2[i]]++;
           
        //Compare frequencies
        for(i = 0; i <256; i++){
            if(count[i] != count2[i]){
                printf("Strings are Not Anagrams");
                return 0;
            }
        }   

        printf("Strings are Anagrams");

        return 0;
     }

     //Q-92
     #include <stdio.h>

     int main(){
        char str[100];
        int freq[256] = {0};
        int i, max = 0;
        char ch;

        //Input string
        printf("Enter a string: ");
        gets(str);

        //Count frequency of each other
        for (i = 0; str[i] != '\0'; i++) {
            freq[(int)str[i]]++;
        }

        //Find maximum occuring character
        for(i =0; i<256; i++){
            if(freq[i] > max) {
                max = freq[i];
                ch=i;
            }        
     }

     printf("Maximum Occuring Character = %c", ch);
     printf("\nFrequency = %d", max);

     return 0;
 }  