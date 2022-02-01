#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[100],n,i,temp;
    printf("Enter the number of elemnts\t ");
    scanf("%d",&n);
    printf("Enter the %d Elemnts in the array ",i+1);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
 }
    for(int i=0;i<n;i++){
  printf("The sorted array is %d\n",arr[i]);

}
}