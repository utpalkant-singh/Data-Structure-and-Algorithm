#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first;

void Create(int A[],int n){
    int num=n;
    first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *t,*last;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<num;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *a){
    while(a!=NULL){
        cout<<"Data In The Node is: "<<a->data<<endl;
        a=a->next;
    }
}

int Delete(int pos){
    struct Node *p=first,*q=NULL, *temp;
    int x;
    if(pos==0){
        p=first;
        x=p->data;
        first=first->next;
        delete(p);
    }
    else if(pos>0){
        int i;
        for(i=0;i<pos-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete(p);
    }
    return x;
}

int main(){
    int n;
    cout<<"Enter the number of element you want to enter: ";
    cin>>n;
    int *A=new int[n];
    cout<<"Enter the element to linked list: "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    Create(A,n);
    Display(first);
    int pos,key;
    cout<<"Enter the position you want to delete: ";
    cin>>pos;
    cout<<"Deleted Element is: "<<Delete(pos)<<endl;;
    Display(first);
    return 0;
}
