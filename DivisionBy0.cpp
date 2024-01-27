# include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b!=0){
            cout<<"a/b: "<<a/b<<endl;
        }
        else{
            throw b;
        }
    }catch(int x){
        cout<<"Exception caught\n";
    }
}