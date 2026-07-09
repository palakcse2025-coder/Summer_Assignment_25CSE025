//Q-93
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    //Input first string
    printf("Enter first string: ");
    gets(str1);

    //Input second string
    printf("Enter second string: ");
    gets(str2);

    //Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not rotations.");
        return 0;
    }

    //Copy first string twice
    strcpy(temp, str1);
    strcat(temp, str1);

    //Check whether second string exists in doubled string
    if(strstr(temp, str2))
       printf("Stringgs are rotations of each other.");
    else
       printf("Strings are not rotations.");
       
       return 0;
}

//Q-94
#include <stdio.h>

int main() {
    char str[100];
    int i, count;

    //Input string
    printf("Enter a string: ");;
    gets(str);

    printf("Compressed Strings: ");

    i=0;

    //Count consecutive characters
    while (str[i] != '\0') {

        count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
        i++;
    }

    return 0;
}

//Q-95
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100], word[100];
    int i = 0, j = 0, max = 0;

    //Input sentence
    printf("Enter a sentence: ");
    gets(str);

    while (1) {

        if(str[i] == ' ' || str[i] == '\0') {

            word[j] = '\0';

            //Check longest word
            if(j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if(str[i] == '\0')
               break;
        }
        else {
            word[j] = str[i];
            j++;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}

//Q-96
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    // Input string
    printf("Enter a string: ");
    gets(str);

    //Remove duplicate characters
    for(i = 0; str[i] != '\0'; i++) {

        for(j = i + 1; str[j] != '\0'; ) {

            if(str[i] == str[j]) {

                //Shift characters to left
                for(k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            }
            else{
                j++;
            }
        }
    }

    printf("String after removing dupllicates:\n%s", str);

    return 0;
}