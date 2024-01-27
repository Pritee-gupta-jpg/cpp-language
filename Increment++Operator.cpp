# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    Integer(int y=0){
        x=y;
    }
    void operator ++(){
        ++x;
    }
    void operator ++(int){
        x++;
    }
    void display(){
        cout<<x<<endl;
    }
};

int main(){
    Integer a(5);
    cout<<"a=";
    a.display();
    ++a;
    cout<<"after ++a: a=";
    a.display();
    a++;
    cout<<"after a++ : a=";
    a.display();

}







