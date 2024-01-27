# include<bits/stdc++.h>
using namespace std;
int main(){
    string s1("Greater"),s2("Bangalore");
    string s3;
    s3=s1+s2;
    cout<<s3<<endl;
    s3="Greater"+s2;
    cout<<s3<<endl;
    s3=s2+s1;
    cout<<s3<<endl;
    s1+=s2;
    cout<<s1<<endl;
    s2+=s1;
    cout<<s2<<endl;
    s3=s3+s1+s2;
    cout<<s3<<endl;
}