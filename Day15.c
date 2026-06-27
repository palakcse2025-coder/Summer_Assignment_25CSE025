//q-57
#include <stdio.h>
int main(){
    int n, i, j, temp;
    //Read size of array
    printf("Enter array of elements: ");
    scanf("%d", &n);

    int arr[n];
    //Read array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //Bubble sort in ascending order
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i -1; j++){
            if(arr[j] > arr[j + 1]){
                //Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //Display sorted array
    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}

//Q-58
#include <stdio.h>
int main(){
    int n, i, j, temp;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //Read array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Bubble sort in ascending order
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(arr[j] < arr[j + 1]){
                //Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //Display sorted array
    printf("Array in descending order:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;

}

//Q-59
#include <stdio.h>
int main(){
    int n1, n2, i;
    //Read size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    //Read first array elements
    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }

    //Read size of second array
    printf("Enter size of seconnd array: ");
    scanf("%d", &n2);

    int arr2[n2];

    //Read second array elements
    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    //Copy the first array
    for(i = 0; i < n1; i++){
        merged[i] = arr1[i];
    }

    //Copy second array 
    for(i = 0; i < n2; i++){
        merged[n1 + i] = arr2[i];
    }

    //Display merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++){
        printf("%d", merged[i]);
    }

    return 0;
}

//Q-60
#include <stdio.h>
int main(){
    int n, i, temp;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //Read size of array
    printf("Enter number of elements: ");
    scanf("d", &n);

    int arr[n];

    //Read array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Reverse array using swapping
    for(i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n - i -1];
        arr[n - i - 1] = temp;
    }

    //Display reversed array 
    printf("Reversed array:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;

}
