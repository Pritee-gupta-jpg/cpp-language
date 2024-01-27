# include <bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a line of text: "<<endl;
    cin.get(ch);
    while(ch!='\n'){
        cout.put(ch);
        cin.get(ch);
    }
}