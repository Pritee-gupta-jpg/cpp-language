# include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout;
    fout.open("string.txt");
    fout<<"Data Encapsulation\n";
    fout<<"Polymorphism\n";
    fout<<"Inheritance\n";
    fout.close();
    ifstream fin;
    fin.open("string.txt");
    cout<<"The content of teh file string.txt is :\n";
    char str[25];
    while(!fin.eof()){
        fin.getline(str,25);
        cout<<str<<"\n";
    }
    fin.close();
}