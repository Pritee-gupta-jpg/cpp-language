# include<bits/stdc++.h>
# include<iostream>
using namespace std;
int main(){
    //ios flags
    float f=456.78;
    cout<<setiosflags(ios::scientific)<<f<<endl;
    char ch[20];
    cin.getline(ch, 20);
   // cout<<setiosflags(ios::skipws)<<ch<<endl;
   cout.write(ch,20);
    char str[15]="c++ language";
    cout<<setiosflags(ios::left)<<str<<endl;
    cout<<setiosflags(ios::right)<<str<<endl;
    int num=4;
    cout<<setiosflags(ios::dec)<<num<<endl;
    cout<<setiosflags(ios::oct)<<num<<endl;
    cout<<setiosflags(ios::hex)<<num<<endl;
    cout<<setiosflags(ios::showbase)<<num<<endl;
    cout<<setiosflags(ios::showpoint)<<num<<endl;
    cout<<setiosflags(ios::showpos)<<num<<endl;
    cout<<setiosflags(ios::uppercase)<<num<<endl;
    







}