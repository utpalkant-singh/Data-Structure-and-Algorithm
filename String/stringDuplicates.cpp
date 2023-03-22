#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    int a[26]={0}, A[26]={0};
    int i;
    for(i=0;name[i]!='\0';i++){
        if(name[i]>='a'&&name[i]<='z'){
            a[name[i]-97]++;
        }
        else if(name[i]>='A'&&name[i]<='Z'){
            A[name[i]-65]++;
        }
    }
    for(int i=0;i<26;i++){
        if(a[i]>1)
            cout<<"Duplicate element is: "<<char(i+97)<<"  Repeats for: "<<a[i]<<endl;
    }
    for(int i=0;i<26;i++){
        if(A[i]>1)
            cout<<"Duplicate element is: "<<char(i+65)<<"  Repeats for: "<<A[i]<<endl;
    }
    return 0;
}
