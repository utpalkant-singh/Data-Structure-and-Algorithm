//Anagram means two strings are made up of same characters that may be jumbled.

#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    char name1[50]={0};
    gets(name1);
    int a[26]={0},A[26]={0};
    int i,j,k;
    for(i=0;name[i]!='\0';i++){}
    for(j=0;name[j]!='\0';j++){}
    if(i!=j)
        cout<<"Not an Anagram"<<endl;
    else{
        for(i=0;name[i]!='\0';i++){
            if(name[i]>='a'&&name[i]<='z'){
                a[name[i]-97]++;
            }
            else if(name[i]>='A'&&name[i]<='Z'){
                A[name[i]-65]++;
            }
        }
        int m;
        for(m=0;name1[m]!='\0';m++){
            if(name1[m]>='a'&&name1[m]<='z'){
                a[name1[m]-97]--;
            }
            else if(name1[m]>='A'&&name1[m]<='Z'){
                A[name1[m]-65]--;
            }
        }
        int countt=0;
        for(int i=0;i<26;i++){
            if((a[i]!=0)){
                cout<<"Not an Anagram"<<endl;
                countt++;
                break;
            }
            else if((A[i]!=0)){
                cout<<"Not an Anagram"<<endl;
                countt++;
                break;
            }
        }
        if(countt==0)
            cout<<"These strings are Anagram"<<endl;
    }
    return 0;
}
