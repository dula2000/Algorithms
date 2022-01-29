//linearsearch //
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int linearsearch(int arr[],int a,int sk)
{int index=0;
    bool found= false;
    int position=-1;
        while(index<a && !found)
        { 
 if (arr[index]== sk)
 {
    found= true;
    position= index;
 }

     index++;
 
        }
return position;

}
int main()
{
int b,sk;
printf("Enter the Number of elements ");
scanf("%d",&b);
int arr[b];
printf("Enter the search key ");
scanf("%d",&sk);
for(int i=0;i<b;i++)
{
printf("Enter the index element ");
scanf("%d",&arr[i]);
}
printf("The position of the search key is %d",linearsearch(arr, b, sk));



}