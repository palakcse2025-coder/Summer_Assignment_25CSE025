//Q-57
#include <stdio.h>

int main(){
    int n, i, j, temp;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //Read array elements
    printf("Enter arrray elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Bubble Sort
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                //Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //Display Sorted array
    printff("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

//Q-58
#include <stdio.h>
int main(){
    int n, i, key;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //Read sorted array elements
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Read element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n -1, mid;
    int found = 0;

    //Binary Search
    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == key){
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
     
    if(found == 0)
       printf("Element not found.");

    return 0;   
}

//Q-59
#include <stdio.h>
int main(){
    int rows, cols, i ,j;

    //Read matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], Sum[rows][cols];

    //Read first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sscanf("%d", &A[i][j]);
        }
    }

    //Read second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &B[i][j]);;
        }
    }

    //Add matrices
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    
    //Display result
    printf("Sum of matrices:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;

}  

//Q-60
#include <stdio.h>
int main(){
    int r1, c1, r2, c2, i, j, k;

    //Read dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    //Read dimwnsions of second matrix
    printf("Enter rows and columns of ssecond matrix: ");
    scanf("%d %d", &r2, &c2);

    //Check multiplication condition
    if(c1 != r2){
        printf("Matrix multiplication not possible.");
        return 0;
    }

    int A[r1][c1], B[r2][c2], Product[r1][c2];

    //Read first matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    //Intialize product matrix to 0
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            Product[i][j] = 0;
        }
    }

    //Multiply matrices
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            for(k = 0; k < c1; k++){
                Product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    //Display result
    printf("Product of matrices:\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            printf("%d", Product[i][j]);
        }
        printf("\n");
    }

    return 0;
}