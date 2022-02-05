#include <stdio.h>
int size;
struct stack{
    int arr[100];
    int top;
}st;

void push(int ele){
if(st.top==(size-1)){
 printf("Stack is full");
}
else{
    st.top++;
    printf("Enter a value");
    scanf("%d",&ele);
    st.arr[st.top]=ele;
}
}

int pop(){
    if((st.top)==-1){
        printf("\nThere are no elements to remove");
    }
    else{
        int out;
        out=st.arr[st.top];
        st.top--;
        return out;
    }
}

int peek(){
    int display;
    display=st.arr[st.top];
    return display;
}

void display(){
    if(st.top>=0){
         printf("Elements in the stack is\n" );
        for(int i=st.top;i>=0;i--){
                   printf("\n%d",st.arr[i]);
        }
    }
    else{
        printf("\nNo elements to display");
        }
    }

int main(){
    st.top=-1;
    int op,ele;
    printf("Enter the stack size \t");
    scanf("%d",&size);
    printf("1. push\n 2. pop\n 3. peek\n 4. display");
    do{
       printf("\nEnter your option ");
       scanf("%d",&op);
       switch(op){
           case 1:push(ele);break;
           case 2:printf("%d",pop());break;
           case 3:printf("%d",peek());break;
           case 4:display();break;
       }
    }while(op!=4);
}