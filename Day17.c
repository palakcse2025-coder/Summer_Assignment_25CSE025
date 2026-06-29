//Q-65 a
#include <stdio.h>
int main(){
    int a[100], b[100], merged[200], unionArr[200];
    int n1, n2, i, j, k = 0, found;

    // Read size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Read first array elements
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++){
        scanf("%d", &a[i]);
    }

    //Read size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    //Read second array elements
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }

    //Copy first array into merged array
    for(i = 0; i < n1; i++){
        merged[i] = a[i];
    }

    //copy second array after first array
    for(i = 0; i < n2; i++){
        merged[n1 + i] = b[i];
    }

    //Display merged array
    printf("Merged Array: ");
    for(i = 0; i < n1 + n2; i++){
        printf("%d ", merged[i]);
    }
    return 0;

} 
    // Q-66
    #include <stdio.h>
    int main(){
    int a[100], b[100], unArr[200];
    int n3, n4, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n3);

    printf("Enter first array elements:\n");
    for(i = 0; i < n3; i++){
        scanf("%d", &a[i]);
    }


    printf("Enter size of second array: ");
    scanf("%d", &n4);

    printf("Enter second array elements:\n");
    for(i = 0; i < n4; i++)
        scanf("%d", &b[i]);
    

    //Add first array elements
    for(i = 0; i < n3; i++)
        unArr[k++] = a[i];

        //Add only unique elements from second array
    for(i = 0; i < n4; i++){
        found = 0;

        for(j = 0; j < k; j++){
            if(b[i] == unArr[j]){
                found = 1;
                break;
            }
        }

        if(!found)
            unArr[k++] = b[i];
    }

    printf("Union of Arrays: ");
    for(i = 0; i < k; i++)
        printf("%d ", unArr[i]);

    return 0;
}

//Q-67
#include <stdio.h>
int main(){
    int a[100],b[100];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
    scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n1; i++){
        for(j = 0; j < n2; j++){
            if(a[i] == b[j]){
                printf("%d", a[i]);
                break;
            }
        }
    }

    return 0;
}

//Q-68
#include <stdio.h>
int main(){
    int a[100], b[100];
    int n1, n2, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
       scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    
    printf("Enter second array elements:\n");
    for(i = 0; i , n2; i++)
       scanf("%d", &b[i]);

    printf("Common Elements: ");
    
    for(i = 0; i < n1; i++){
        found = 0;

        for(j = 0; j < n2; j++){
            if(a[i] == b[j]){
                found = 1;
                break;
            }
        }

        if(found)
          printf("%d", a[i]);
    }

    return 0;

}




