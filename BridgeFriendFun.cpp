# include<bits/stdc++.h>
using namespace std;
class A;
class B{
    private:
    int x;
    public:
    void get();
    void display();
    friend void sum(A,B);
};
void B::get(){
    cin>>x;
}
void B::display(){
    cout<<x<<endl;
}

class A{
    private:
    int y;
    public:
    void get();
    void display();
    friend void sum(A,B);
};

void A::get(){
    cin>>y;
}

void A::display(){
    cout<<y<<endl;
}

void sum(A a,B b){
    cout<<b.x+a.y;
}

int main(){
    A s1;
    B s2;
    cout<<"enter the member data for the object s1 of class A: "<<endl;
    s1.get();
    cout<<"the value of data member for the object s1 is :"<<endl;
    s1.display();
    cout<<"enter the data member for the object s2 is :"<<endl;
    s2.get();
    cout<<"the value of data member for the object s2 of class B is : "<<endl;
    s2.display();
    cout<<"the sum of the data member of the object s1 and s2 of class s1 and s2 respectively are:"<<endl;
    sum(s1,s2);
}












