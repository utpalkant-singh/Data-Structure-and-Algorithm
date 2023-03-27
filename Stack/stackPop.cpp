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

void Display(struct Stack p){
    while(p.top!=-1){
        cout<<"Element in the stack is: "<<p.s[p.top]<<endl;
        p.top--;
    }
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
    int x=Pop(&st);
    cout<<"Element poped out is: "<<x<<endl;
    Display(st);
    return 0;
}
