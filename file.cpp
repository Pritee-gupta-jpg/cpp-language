# include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout;
    char ch;
    fout.open("text.txt");
    cout<<"Enter a character and type 'q' to terminate "<<endl;
    cin>>ch;
    while(ch!='q'){
        fout.put(ch);
        cin>>ch;
    }
    fout.close();
    cout<<"the content of teh file is :"<<endl;
    ifstream fin;
    fin.open("text.txt");
    char c;
    while(!fin.eof()){
        fin.get(c);
        cout<<c;

    }
    fin.close();
}