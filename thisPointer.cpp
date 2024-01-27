# include<bits/stdc++.h>
using namespace std;
class temp{
    private:
    int x;
    public:
    void get(){
        cin>>x;
    }
    void display(){
        cout<<"value is :"<<x<<"and the address of this object is "<<this<<endl;
    }
};
int main(){
    temp s1,s2;
    cout<<"enter object for s1"<<"\t";
    s1.get();
    cout<<"value and the address of the object s1 is :"<<"\t";
    s1.display();
    cout<<"enter object for s2"<<"\t";
    s2.get();
    cout<<"value and the address of the object s2 is :"<<"\t";
    s2.display();

}










