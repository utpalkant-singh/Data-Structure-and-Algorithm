#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    int i;
    for(i=0;name[i]!='\0';i++){} // it counts the white spaces also;
    int counter=0;
    for(int j=0;name[j]!='\0';j++){
        if(name[j]==' ')
            continue;
        else
            counter++;
    } //this piece of code will not count the white spaces;
    cout<<"Length of the string is: "<<i<<endl;
    cout<<"Length of the string is: "<<counter<<endl;
    return 0;
}
