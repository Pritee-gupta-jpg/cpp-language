# include<bits/stdc++.h>
using namespace std;
struct emp{
    int empno;
    char ch[20];
    float salary;
    void get(){
        cin>>empno>>ch>>salary;
    }
    void display(){
        cout<<empno<<" "<<ch<<" "<<salary<<endl;
    }
};
int main(){
    struct emp s;
    cout<<"enter empno, name,salary"<<endl;
    s.get();
    cout<<"here is what you entered"<<endl;
    s.display();
}