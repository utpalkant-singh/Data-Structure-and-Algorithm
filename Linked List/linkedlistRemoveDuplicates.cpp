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
    return 0;
}
