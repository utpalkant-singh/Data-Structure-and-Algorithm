#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    int i;
    //the below code will toggle lower case to upper case;
    for(i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z')
            name[i]-=32;
    }
    cout<<name<<endl;
    //the below code will toggle upper case to lower case;
    for(i=0;name[i]!='\0';i++){
        if(name[i]>='A' && name[i]<='Z')
            name[i]+=32;
    }
    cout<<<<endl;
    //the below code will toggle the upper case to lower case and vice versa;
    for(i=0;name[i]!='\0';i++){
        if(name[i]>='a' && name[i]<='z')
            name[i]-=32;
        else if(name[i]>='A' && name[i]<='Z')
            name[i]+=32;
    }
    cout<<name<<endl;
    return 0;
}
