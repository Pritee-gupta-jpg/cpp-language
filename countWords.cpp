#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[60];
    gets(str);
    int cnt=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==32)cnt++;
    }
    cout<<"no of word is :"<<cnt<<endl;
}
