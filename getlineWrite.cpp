# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cout<<"enter the size of string:"<<endl;
    cin>>n;
    char ch[n];
    fflush(stdin);
    cout<<"enter the string of specified length:"<<endl;
    cin.getline(ch,n);
    cout<<"the String you entered is :"<<endl;
    cout.write(ch,n);
    return 0;
}