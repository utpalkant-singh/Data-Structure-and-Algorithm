#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int size;
    int top;
    int *s;
}st;

void Push(struct Stack *p, int x){
    if(p->top==p->size-1)
        cout<<"Stack Overflow"<<endl;
    else{
        p->top++;
        p->s[p->top]=x;
    }
}

int Pop(struct Stack *p){
    int x;
    if(p->top==-1)
        cout<<"Stack Underflow"<<endl;
    else{
        x=p->s[p->top];
        p->top--;
    }
    return x;
}

int Peek(struct Stack p, int pos){
    int x=-1;
    if(p.top-pos+1<0){
        return -1;
    }
    else{
        x=p.s[p.top-pos+1];
    }
    return x;
}

void Display(struct Stack p){
    while(p.top!=-1){
        cout<<"Element in the stack is: "<<p.s[p.top]<<endl;
        p.top--;
    }
}

int isEmpty(struct Stack st){
    if(st.top==-1)
        return 1;
    else
        return 0;
}

int isFull(struct Stack st){
    if(st.top==st.size-1)
        return 1;
    else
        return 0;
}

int main(){
    cout<<"Enter the size of the stack: ";
    cin>>st.size;
    st.top=-1;
    st.s=new int[st.size];
    for(int i=0;i<st.size;i++){
        int x;
        cin>>x;
        Push(&st,x);
    }
    Display(st);
    //Pop(&st);Pop(&st);Pop(&st);Pop(&st);Pop(&st);
    if(isEmpty(st)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    if(isFull(st)){
        cout<<"Stack is Full"<<endl;
    }
    else{
        cout<<"Stack is not Full"<<endl;
    }
}
