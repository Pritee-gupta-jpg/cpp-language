# include<bits/stdc++.h>
using namespace std;
template<class T>
class temp{
    private:
    T x;
    public:
    void get();
    void display();
};
template<class T>
void temp<T>::get(){
    cin>>x;
}

template<class T>
void temp<T>::display(){
    cout<<x<<endl;
    }

    int main(){
        temp<int>a;
        cout<<"enter the value of a: "<<endl;
        a.get();
        cout<<"the value of x is: "<<endl;
        a.display();
    }












