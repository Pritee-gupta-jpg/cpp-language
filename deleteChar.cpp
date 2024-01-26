#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[10];
    cin>>str;
    char ch;
    cout<<"enter the character you want to delete";
    cin>>ch;
    int index;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
         index=i;
         break;
        }
    }
    int i;
    for(i=index;i<strlen(str)-1;i++){
        str[i]=str[i+1];
    }
   str[i]='\0';
   
    cout<<str;
}
