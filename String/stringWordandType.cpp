#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[50]={0};
    gets(name);
    int i;
    int wcount=0,vcount=0,ccount=0;
    //word count
    for(i=0;name[i]!='\0';i++){
        if(name[i]==' ' && name[i-1]!=' ')
            wcount++;
    }
    cout<<"Number of word in the string is: "<<wcount+1<<endl;
    //vowel and consonant count
    for(i=0;name[i]!='\0';i++){
        if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='o'||name[i]=='O'||name[i]=='i'||name[i]=='i'||name[i]=='u'||name[i]=='u')
            vcount++;
        else if((name[i]>=65 && name[i]<=90)||(name[i]>=97 && name[i]<=122))
            ccount++;
    }
    cout<<"Vowels in the string is: "<<vcount<<" Consonant in the string is: "<<ccount<<endl;
    return 0;
}
