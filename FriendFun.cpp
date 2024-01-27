# include<bits/stdc++.h>
using namespace std;
class temp{
    private:
    int x;
    public:
    void get();
    friend void display(temp);
};
void temp::get(){
    cin>>x;
}

void display(temp t){
    cout<<t.x<<endl;
}
int main(){
    temp s;
    cout<<"enter the value of data member of object s :"<<endl;
    s.get();
    cout<<"the value what you entered for the object s is :"<<endl;
    display(s);
}
