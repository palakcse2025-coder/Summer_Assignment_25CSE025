#include <stdio.h>
int main(){
    int arr[100], n, i, key,found = 0;
    
    //Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Input elements to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    //Linear search
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
       printf("Element not found\n");

       return 0;
}

//Q-54
#include <stdio.h>
int main(){
    int n, i, key, count = 0;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //Read array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Read element whose frequency is to be found
    printf("Enter element: ");
    scanf("%d", &key);

    //Count Frequency
    for(i = 0; i < n; i++){
        if(arr[i] == key)
        count++;
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}

//Q-55
#include <stdio.h>
#include <limits.h>

int main(){
    int n, i;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    //Read array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;


//Find largest and second largest
for(i = 0; i < n; i++){
    if(arr[i] > largest){
        secondLargest = largest;
        largest = arr[i];
    }
    else if(arr[i] > secondLargest && arr[i] != largest){
        secondLargest = arr[i];
    }
}

if(secondLargest == INT_MIN)
    printf("Second largest element does not exist.");
else
    printf("Second largest element = %d", secondLargest);

return 0;    
}

//Q-56
#include <stdio.h>
int main(){
    int n, i,j;

    //Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //Read array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    //Compare each element with remaining elements
    for(i = 0; i < n; i++){
        int duplicate = 0;

        //Check if already printed
        for(i = 0; i < n; i++){
            if(arr[i] == arr[j]){
                duplicate = 1;
                break;
            }
        }

        if(duplicate)
           continue;
    }
    
    //Find duplicates
    for(j = i + 1; j < n; j++){
        if(arr[i] == arr[j]){
            printf("%d ", arr[i]);
            break;
        }
    }
    return 0;
    
}


