//Q-49
#include <stdio.h>
int main(){
    int arr[100], n, i;

    //Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //Display  array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

//Q-50
#include <stdio.h>

int main(){
    int arr[100], n, i, sum = 0;
    float avg;

    //Input size of array 
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    //Calculate average
    avg = (float)sum / n;

    printf("sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

//Q-51
#include <stdio.h>
int main(){
    int arr[100], n, i;
    int largest, smallest;

    //Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Input array elements
    printf("Enter elements:\n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Assume first element is largest and smallest
    largest = smallest = arr[0];

    //Find largest and smallest
    for(i = 1; i < n; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest Elements = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}

//Q-52
#include <stdio.h>
int main(){
    int arr[100], n, i;
    int even = 0,odd = 0;

    //Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //Input elements
    printf("Enter elements:\n");
    for(i = 0; i<n; i++){
        scanf("%d", &arr[i]);

        //Check even or odd
        if(arr[i] % 2 == 0)
           even++;
        else
           odd++;
}

printf("Even Elements = %d", even);
printf("Odd Elements = %d\n", odd);

return 0;
}