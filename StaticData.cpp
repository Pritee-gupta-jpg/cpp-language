# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
     static int count;
     public:
     void get();
     void display();
    //  {
    //      cout<<"Value of data member is :"<<x<<endl;
    //     cout<<"the value of count is :"<<count<<endl;
    //  }
};
 int Integer::count;
 void Integer:: get(){
    cin>>x;
    // count++;
 }
 void Integer::display(){
     count++;
    cout<<"Value of data member is :"<<x<<endl;
    cout<<"the value of count is :"<<count<<endl;
 }
int main(){
    Integer s,s1;
    cout<<"Enter the member data of object s:  "<<endl;
    s.get();
    cout<<"the value you entered is "<<endl;
    s.display();
     cout<<"Enter the member data of object s1:  "<<endl;
    s1.get();
    cout<<"the value you entered is "<<endl;
    s1.display();
}







