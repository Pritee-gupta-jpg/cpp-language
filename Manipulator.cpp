# include<bits/stdc++.h>
using namespace std;
ostream& currency(ostream& os){
    os<<"$";
    return os;
}
ostream& star(ostream& s){
    s<<"*";
    return s;
}
int main(){
    int a=2456;
    cout<<currency<<a<<endl;
    cout<<star<<a<<endl;
}