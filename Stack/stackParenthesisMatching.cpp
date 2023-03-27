#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int size;
    int top;
    char *s;
}st;

void Push(struct Stack *p, char x){
    if(p->top==p->size-1)
        cout<<"Stack Overflow"<<endl;
    else{
        p->top++;
        p->s[p->top]=x;
    }
}

char Pop(struct Stack *p){
    char x;
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

int isBalance(char *exp){
    struct Stack p;
    p.size=strlen(exp);
    p.top=-1;
    p.s=new char[p.size];
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(')
            Push(&p,exp[i]);
        else if(exp[i]==')'){
            if(isEmpty(p))
                return false;
            Pop(&p);
        }
    }
    return isEmpty(p) ? true : false;
}

int main(){
    char *exp="(a+b)+(c+d)";
    if(isBalance(exp))
        cout<<"The parenthesis are balanced in the expression"<<endl;
    else
        cout<<"The parenthesis are not balanced in the expression"<<endl;
}
