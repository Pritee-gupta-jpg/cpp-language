# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int feet;
    float inches;
    public:
    Integer(int f=0,float i=0){
        feet=f;
        inches=i;
    }
    Integer operator +(Integer& m){
        Integer t;
        t.feet=feet+m.feet;
        t.inches=inches+m.inches;
        return t;
    }
    void display(){
        cout<<feet<<"-->"<<inches<<endl;
    }
};

int main(){
    Integer m1(2,3),m2(4,10),m3;
    cout<<"m1=";
    m1.display();
    cout<<"m2=";
    m2.display();
    m3=m1+m2;
    cout<<"m3=";
    m3.display();
}









