#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    char name1[50]={0};
    gets(name1);
    int i,j;
    for(i=0;name[i]!='\0';i++){}
    for(j=0;name[j]!='\0';j++){}
    int k;
    if(i!=j)
        cout<<"Strings are not equal"<<endl;
    else{
        for(k=0;name[k]!='\0';k++){
            if(name[k]!=name1[k]){
                cout<<"Strings are not equal"<<endl;
                break;
            }
        }
    }
    if(name[k]=='\0')
        cout<<"Strings are equal"<<endl;
    return 0;
}
