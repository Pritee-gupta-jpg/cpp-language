# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    static int count;
    public:
    void get();
    void display();
    static void show_count();
};
int Integer::count;
void Integer::get(){
    cin>>x;
}
void Integer::display(){
    cout<<x<<endl;
}
void Integer::show_count(){
    count=count+1;
    cout<<"the number of count after increasing 5 is: "<<count<<endl;
}
int main(){
    Integer s1,s2;
    cout<<"enter the data member of object s1 :"<<endl;
    s1.get();
    cout<<"the data you entered for data member of object s1 :"<<endl;
    s1.display();
    cout<<"the value of count in the object s1 is : "<<endl;
    s1.show_count();
     cout<<"enter the data member of object s2 :"<<endl;
    s2.get();
    cout<<"the data you entered for data member of object s2 :"<<endl;
    s2.display();
    cout<<"the value of count in the object s2 is : "<<endl;
    s2.show_count();


}











