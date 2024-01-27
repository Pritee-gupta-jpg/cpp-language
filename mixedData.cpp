#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout;
    fout.open("mixedData.txt");
    int i=23;
    float f=35.456;
    char c='F';
    fout<<i<<"\n";
    fout<<f<<"\n";
    fout<<c<<"\n";
    fout.close();
    ifstream fin;
    fin.open("mixedData.txt");
    fin>>i;
    cout<<i<<"\n";
    fin>>f;
    cout<<f<<"\n";
    fin>>c;
    cout<<c<<"\n";
    fin.close();

}