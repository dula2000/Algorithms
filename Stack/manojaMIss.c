#include <stdio.h>
//lecture eke thiyena widiya
//all are in index method
int ele,top,s;
struct stack{
    int s[5];
    int top;
}st;

void push(){
    if((st.top)==-1){
        printf("Stack is full");
    }
    else{
        st.top++;
         st.s[top]=ele;
         printf("Item added %d\t",st.top);
    }
}

int pop (int ele){
    int out=st.s[st.top];
    printf("Popped item %d",st.top);
}
int main(){
    push(10);
    push(20);
    pop(1);
}