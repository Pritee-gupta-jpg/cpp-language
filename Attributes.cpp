# include<bits/stdc++.h>
using namespace std;
int main(){
    string s1("Standard C++ Strings");
    cout<<"Size: "<<s1.size()<<endl;
    cout<<"Length: "<<s1.length()<<endl;
    cout<<"Capacity :"<<s1.capacity()<<endl;
    cout<<"Max_size: "<<s1.max_size()<<endl;
    string s2("Data Encapsulation");
    string s3("Polymorphism");
    int i;
    for( i=0;i<s2.length();i++)
    cout<<s2[i];
    for(i=0;i<s3.length();i++){
        cout<<s3.at(i);
    }
    string s4("abc");
    string s5("pqr");
    string s6("xyz");
    cout<<"s4 :"<<s4<<endl;
    cout<<"s5 :"<<s5<<endl;
    cout<<"s6: "<<s6<<endl;
    s4.insert(2,s2);
    cout<<"s4 after inserting s5at the position 2 is :"<<s4<<endl;
    s4.erase(2,4);
    cout<<"s4 after erasing from 2 to 4 position :"<<s4<<endl;
    s5.replace(1,2,s3);
    cout<<"s5 after replacing s3 to position 1 :"<<s5<<endl;
    s5.erase(1,3);
    cout<<"s5 after erasing from index 1 to 3 is :"<<s5<<endl;
    string str("Jacob Manohar abraham");
    cout<<str<<endl;
    int k=str.find("Manohar");
    cout<<"Manohar is found at the postion :"<<i<<endl;
    int j=str.find_first_of('a');
    cout<<"First occurrence of a in str is :"<<j<<endl;
    int m=str.find_last_of('a');
    cout<<"last occurrence of a in the str : "<<m<<endl;
    string n1="Ram";
    string n2="Shyam";
    if(n1.compare(n2)==0){
        cout<<"both are equal\n";
    }
    else{
        cout<<"Strings are not same\n";
    }
}