# include<bits/stdc++.h>
using namespace std;
template<class T>
class scalar{
    private:
    T x;
    public:
    scalar(){
        x=0;
    }
    scalar(T y){
        x=y;
    }
    T sum(scalar b){
        T t;
        t=x+b.x;
        return t;
    }
};

int main(){
    scalar<int>a(7),b(4);
    scalar<float>x(3.4),y(9.23);

    cout<<"the sum of intergers is: "<<a.sum(b)<<"\n";
    cout<<"the sum of floating is : "<<x.sum(y)<<"\n";
}







