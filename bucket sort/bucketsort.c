#include<stdio.h>
// call int bucketsort function in int maain
int bucketSort(int [], int);

int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bucketSort(arr, n);
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
// sort the array

int bucketSort(int arr[], int n)
{
    //define varible in sort array
    int i, j, k, max, min, count;
    max = arr[0];
    min = arr[0];
    for(i = 1; i < n; i++)
    {
        //check max and min value in sorted arry
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    //count max and min
    count = max - min + 1;
    // put elements in buckets
    int bucket[count];
    for(i = 0; i < count; i++)
    {
        bucket[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        bucket[arr[i] - min]++;
    }
    for(i = min, j = 0; i <= max; i++)
    {
        for(k = bucket[i - min]; k > 0; k--)
        {
            arr[j++] = i;
        }
    }
    return 0;
}

// 2nd way

#include <stdio.h>
#include <stdlib.h>

void bucketSort(int array[], int n) {
    int i, j, k, bucket[n];

    for (i = 0; i < n; i++)
        bucket[i] = 0;

    for (i = 0; i < n; i++)
        bucket[array[i]]++;

    for (i = 0, j = 0; i < n; i++)
        for(k = bucket[i]; k > 0; k--)
            array[j++] = i;
}

int main() {
    int array[] = {5, 3, 1, 4, 2};
    int n = sizeof(array)/sizeof(array[0]);

    bucketSort(array, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
