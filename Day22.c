//Q-85

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 1;

    //Input string
    printf("Enter a string: ");
    gets(str);

    //Find length of string
    while (str[length] != '\0')
    length++;

    //Compare characters from both ends
    for (i = 0; i < length / 2; i++){
        if(str[i] != str[length - i - 1]){
            flag = 0;
            break;
        }
    }

    //Display result
    if (flag)
       printf("Palindrome string");
    else
       printf("Not a palindrome string");
       
    return 0;
}

//Q-86
#include <stdio.h>

int main()[
    char str[200];
    int i, words = 1;

    //Input sentence
    printf("Enter a sentence: ");
    gets(str);

    //Count spaces
    for(i=0; str[i] != '0\n'; i++){
        if(str[i] == ' ')
        words++;
    }

    printf("Total Words = %d", words);

    return 0;
]

//Q-87
#include <stdio.h>

int main(){
    char str[100], ch;
    int i, count = 0;

    //Input string
    printf("Enter a string: ");
    gets(str);

    //Input characters to search
    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    //Count occurrences
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}

//Q-88
#include <stdio.h>
int main(){
    char str[100];
    int i, j = 0;

    //Input string
    printf("Enter a string: ");
    gets(str);

    //Remove spaces
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing spacesl:\n%s", str);

    return 0;
    
}