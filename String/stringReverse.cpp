#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    int i;
    for(i=0;name[i]!='\0';i++){}
    cout<<i<<endl;
    int m=0,n=i-1;
    for(m,n;m<n;m++,n--){
        char temp=name[m];
        name[m]=name[n];
        name[n]=temp;
    }
    cout<<name<<endl;
    return 0;
}
