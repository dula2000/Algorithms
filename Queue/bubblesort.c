//bubble sort
#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void sort(int arr[],int size)
{//varibles
    int j=0,i,temp,iterat=size-1,again;
    bool flag;
//sorting code
do
{
 flag=false;
 //move array
 for(j=0;j<iterat;j++)
 {
    //if array not order
     if(arr[i+1]<arr[i])
     {
         
         temp=arr[i];
         arr[i+1]=arr[i];
         arr[i+1]=temp;
         
     }
     flag=true;

 }
} while (flag);
}

// print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  
int main()
{
    int size,arr[size];
    printf("Enter array size");
    scanf("%d",&size);

    for(int x=0;x<size-1;x++)
    {
        printf("enetr values");
        scanf("%d",&arr[x]);
    }
   printf("Sort is/n");
    printArray(arr,size);
}