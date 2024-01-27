# include<bits/stdc++.h>
using namespace std;
class B;
class A{
    private:
    int x;
    public:
    void get();
    void display();
    friend B;
};
void A::get(){
    cin>>x;
}
void A::display(){
    cout<<x;
}

class B{
    private:
    int y;
    public:
    void get();
    void display();
    void sum(A);
};
void B::get(){
    cin>>y;
}
void B::display(){
    cout<<y<<endl;
}
void B::sum(A a){
    cout<<y+a.x<<endl;
}
int main(){
    A a;
    B b;
    cout<<"enter the data member for the object a of the class A :"<<endl;
    a.get();
    cout<<"the value you entered for the object a of the class A is :"<<endl;
    a.display();
    cout<<"enter the data member for the object b of the class B :"<<endl;
    b.get();
    cout<<"the value you entered for the object b of the class b is :"<<endl;
    b.display();
    cout<<"the sum of the data member of the two object a and b of class A and B respectively :"<<endl;
    b.sum(a);

}

































