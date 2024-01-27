# include<bits/stdc++.h>
using namespace std;
class Integer{
    protected:
    int x;
    public:
    void get();
    void display();
    void increment();
};
void Integer::get(){
    cin>>x;
}
void Integer::display(){
    cout<<x<<"\n";
}
void Integer::increment(){
    x++;
}

class d_Integer:public Integer{
     public:
    void decrement();
};

void d_Integer::decrement(){
    x--;
}

int main(){
    d_Integer d;
    cout<<"enter the value:\n";
    d.get();
    cout<<"the value of d=";
    d.display();
    d.increment();
    cout<<"the value after incrementing is :\n";
    d.display();
    d.decrement();
     cout<<"the value after decrementing is :\n";
    d.display();

}








