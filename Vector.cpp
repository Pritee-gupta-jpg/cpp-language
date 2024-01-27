# include<bits/stdc++.h>
using namespace std;
class Vector{
    private:
    int x;
    public:
    void get();
    void display();
    void add(Vector&);
};

void Vector:: get(){
    cin>>x;
}
void Vector::display(){
    cout<<x<<"\t";
}
void Vector :: add(Vector & v){
    x+=v.x;
}




int main(){
    Vector v1,v2;
    cout<<"Enter the data member of object 1: ";
    v1.get();
    cout<<"val is1 :";
    v1.display();
    cout<<"Enter the data member of object 2: ";
    v2.get();
    cout<<"val is2 :";
    v2.display();
    v2.add(v1);
    v2.display();
}