//Q-97
#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    //Input size of first array
    printf("Enter sixe of first sorted array: ");
    scanf("%d", &n1);

    //Input first sorted array
    printf("Enter elements of first array:\n");
    for(i = 0; i<n1; i+=)
      scanf("%d", &a[i]);

    //Input size of second array
    printf("Enter size of sceond sorted array: ");
    scanf("%d", &n2);
    
    //Input second sorted array 
    printf("Enter elements of second array:\n");
    for(i =0; i < n2; i++)
       scanf("%d", &b[i]);

       i = j = k = 0;

       //Merge both arrays
       while(i < n1 && j < n2) {
         if(a[i] < b[j])
           c[k++] = a[i++];
         else
           c[k++] = b[j++];  
       }

       // Copy remaining elements
       while ( i< n1)
          c[k++] = a[i++];

       while(j < n2)
          c[k++] = b[j++];
          
       //Display merged array
       printf("Merged Array:\n");
       for(i = 0; i < k; i++)
          printf("%d ", c[i]);
          
          return 0;
    }

    //Q-98

    #include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    // Input first string
    printf("Enter first string: ");
    gets(str1);

    // Input second string
    printf("Enter second string: ");
    gets(str2);

    printf("Common Characters: ");

    // Compare each character
    for (i = 0; str1[i] != '\0'; i++) {

        for (j = 0; str2[j] != '\0'; j++) {

            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}

//Q-99

#include <stdio.h>
#include <string.h>

int main() {
    char name[20][50], temp[50];
    int n, i, j;

    // Input number of names
    printf("Enter number of names: ");
    scanf("%d", &n);

    getchar();   // Clear input buffer

    // Input names
    printf("Enter names:\n");
    for (i = 0; i < n; i++)
        gets(name[i]);

    // Sort names
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {

            if (strcmp(name[i], name[j]) > 0) {

                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in Alphabetical Order:\n");

    for (i = 0; i < n; i++)
        printf("%s\n", name[i]);

    return 0;
}

//Q-100

#include <stdio.h>
#include <string.h>

int main() {
    char word[20][50], temp[50];
    int n, i, j;

    // Input number of words
    printf("Enter number of words: ");
    scanf("%d", &n);

    getchar();   // Clear newline

    // Input words
    printf("Enter words:\n");

    for (i = 0; i < n; i++)
        gets(word[i]);

    // Sort according to length
    for (i = 0; i < n - 1; i++) {

        for (j = i + 1; j < n; j++) {

            if (strlen(word[i]) > strlen(word[j])) {

                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    // Display sorted words
    printf("\nWords Sorted by Length:\n");

    for (i = 0; i < n; i++)
        printf("%s\n", word[i]);

    return 0;
}