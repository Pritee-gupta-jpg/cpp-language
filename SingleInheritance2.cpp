#include<bits/stdc++.h>
using namespace std;
class date{
    protected:
    int d,m,y;
    public:
    void get();
    void display();
    void say(){
        cout<<"hii from the base class to check the function overriding condition"<<endl;
    }
};

void date::get(){
    cout<<"enter date ,month and year: ";
    cin>>d>>m>>y;
};
void date::display(){
    cout<<d<<"/"<<m<<"/"<<y<<"\n";
};
class Time:public date{
    private:
    int h,m,s;
    public:
    void get();
    void display();
};

void Time::get(){
    date::get();
    cout<<"enter hour,minutes and seconds\n";
    cin>>h>>m>>s;
};
void Time::display(){
    date::display();
    cout<<h<<":"<<m<<":"<<s<<"\n";
};

int main(){
    Time x ;
    x.say();
    x.get(); 
    x.display(); 
    return 0;
}
































