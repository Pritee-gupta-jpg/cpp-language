# include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    cin>>s;
    cout<<"length is:"<<s.length()<<endl;
    int d=4;
    cout<<"character at index 4 is:"<<s.at(4)<<endl;
    string s1="c language";
    if(s==s1){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"strings are not equal"<<endl;
    }
    s=s.append("with dsa");
    cout<<"string after performing append function is :"<<s<<endl;
    string part=s.substr(2,5);
    cout<<"subtring between 2 and 5 is:"<<part<<endl;
    int i=s.compare(part);
    cout<<"comparing of the two string is:"<<i<<endl;
    cout<<"find string dsa in s :"<<s.find("dsa")<<endl;
    s.replace(6,9, "stl");
    cout<<"string after performing replace function is"<<s<<endl;
    s.insert(6,"  ");
    cout<<"string after inserting white space"<<s<<endl;
    s.erase(6,1);
    cout<<"string after erasing one white space is :"<<s<<endl;
    
    
}
