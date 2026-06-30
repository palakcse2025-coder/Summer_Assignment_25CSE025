//Q-69
#include <stdio.h>
int main(){
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Bubble Sort
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n -i -1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array:\n");;
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

//Q-70
#include <stdio.h>
int main(){
    int n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Selection sort
    for(i = 0; i < n; i++){
        minIndex = 1;

    for(j = i + 1; j < n; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = 1;
        }
    }
    
    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

//Q-71
#include <stdio.h>
int main(){
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n -1, mid;
    int found = 0;

    //Binary search
    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == key){
            printf("Element found at position %d", mid + 1);
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

      return 0;
    }

    //Q-72
    #include <stdio.h>
    int main(){
        int n, i, j, temp;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        int arr[n];

        printf("Enter array elements:\n");
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        //Sort in ascending order
        for(i = 0; i < n - 1; i++){
            for(j = i + 1; j < n; j++){
                if(arr[i] < arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("Array in descending Order:\n");
        for(i = 0; i < n; i++){
            printf("%d", arr[i]);
        }

        return 0;
    }
