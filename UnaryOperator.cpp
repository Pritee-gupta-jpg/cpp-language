# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    Integer(int y=0){
        x=y;
    }
    Integer operator -(){
        Integer t;
        t.x=-x;
        return t;
    }
    void display(){
        cout<<"x="<<x<<endl;
    }
};

int main(){
    Integer a,b(5),c(-7);
    cout<<"b=";
    b.display();
    a=-b;
    cout<<"a=";
    a.display();
    cout<<"c=";
    c.display();
    a=-c;
    cout<<"a=";
    a.display();
}










