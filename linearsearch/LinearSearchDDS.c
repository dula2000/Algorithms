#include <stdio.h>
#include <stdbool.h>

int linearsearch(int arr[],int n, int sk){
      int index=0;
      bool found=false;
      int position=-1;
      while(index<n && !found){
          if(arr[index]==sk){
              found=true;
              position=index;
          }
          
          index++;
      }
      return position;
}
 int main(){
   int a,sk;
   printf("Enter the number of elements in the array\t");
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
       printf("Enter the %d element\t",i+1);
       scanf("%d",&arr[i]);
   }
 printf("Enter the search key\t");
 scanf("%d",&sk); 
 printf("The position is\n %d",linearsearch(arr,a,sk));  //try to clear this
 }