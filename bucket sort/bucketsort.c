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
