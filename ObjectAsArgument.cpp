# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    void get();
    void display();
    void sum(Integer &);
};
void Integer::get(){
    cin>>x;
}
void Integer::display(){
    cout<<x<<endl;
}
void Integer::sum(Integer & t){
    x+=t.x;
}
int main(){
    Integer a,b;
    cout<<"enter the value of data memeber for object a ";
    a.get();
    cout<<endl;
    cout<<"the data member of object a is :";
    a.display();
    cout<<endl;
    cout<<"enter the value of data memeber of object b ";
    b.get();
    cout<<endl;
    cout<<"the data memeber of object b is ";
    b.display();
    cout<<endl;
    cout<<"the sum of data member of object a and b ";
    a.sum(b);
    a.display();
}
