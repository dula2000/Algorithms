#include <stdio.h>
//Binary search
//I-M-P-O-R-T-A-N-T
//please add comment when you change the code

//Binary Search Algorithm – Iterative and Recursive Implementation

int  binarysearch(int num[], int n, int target){
  //define the index high and low
   int low=0;
   int high=n-1; 
//using a while loop for the searching that the number is in high or low part.
  while(low<=high){
      //finding the mid value
      int mid=(high+low)/2;
      //if the mid value is equal to target

    if(target==num[mid]){
        return mid;
    }
    //if the target value is less than the mid value
    else if(target <num[mid]){
              high=mid-1;
    }
    //if the target value is greater than the mid value
    else{
        low=mid+1;
    }
  }
  return -1; //mkuth une nathnm

}
int main(){
    int num[]={2,3,5,6,7};
    int target=7;

    int n=sizeof(num)/sizeof(num[0]);
    int index=binarysearch(num,n,target);
    if (index!= -1){
        printf("element has found @ %d",index+1);
    }
    else{
        printf("Element has not found");
    }
    
    }