# include<bits/stdc++.h>
using namespace std;
class Obj2;
class Obj1{
    private:
    int x;
    public:
    void get();
    void display();
    friend void Compare(Obj1,Obj2);
};
void Obj1::get(){
    cin>>x;
}
void Obj1::display(){
    cout<<x<<endl;
}


class Obj2{
    private:
    int y;
    public:
    void get();
    void display();
    friend void Compare(Obj1,Obj2);
};
void Obj2::get(){
    cin>>y;
}
void Obj2::display(){
    cout<<y<<endl;
}

void Compare(Obj1 a,Obj2 b){
    if(a.x>b.y){
        cout<<" first object is bigger than second"<<endl;
    }
    else if(a.x<b.y){
        cout<<"second object is greater than first object"<<endl;
    }
    else{
        cout<<"both objects are equal"<<endl;
    }
}
int main(){
    Obj1 a;
    Obj2 b;
    cout<<"enter the value for obj 1: ";
    a.get();
    cout<<"value of obj1 is :";
    a.display();
    cout<<"enter the val for obj2 :";
    b.get();
    cout<<"value of obj2 is :";
    b.display();
    cout<<"comparison between onj1 and obj2 :";
    Compare(a,b);
}