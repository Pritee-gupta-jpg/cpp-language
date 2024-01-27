# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    void get(){
        cin>>x;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
    Integer s;
    cout<<"enter the data memeber of class"<<endl;
    s.get();
    cout<<"the value of the dT member is "<<endl;
    s.display();
}