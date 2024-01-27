# include<bits/stdc++.h>
using namespace std;
class temp{
    private:
    int x;
    public:
    void get();
    void display();
};
void temp:: get(){
    cin>>x;
}
void temp:: display(){
    cout<<x+5<<endl;//all statement will run without const keyword
    x=x+5;//but with const keyword x=x+5 wont run because now we are trying to change the value of x 
    cout<<x;
}
int main(){
    temp s;
    cout<<"enter value"<<"\t";
    s.get();
    cout<<"value is :"<<"\t";
    s.display();
}








