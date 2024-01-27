# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    void get();
    void display();
    Integer sum(Integer &);
};
void Integer::get(){
    cin>>x;
}
void Integer::display(){
    cout<<x;
}
Integer Integer::sum(Integer & b){
    Integer t;
    t.x=x+b.x;
    return t;
}
int main(){
    Integer a,b,t;
    cout<<"enter the memeber data of class of object a ";
    a.get();
    cout<<endl;
    cout<<"the member data of object b is ";
    a.display();
    cout<<endl;
    cout<<"enter the member data of object b ";
    b.get();
    cout<<endl;
    cout<<"the data member of object b is ";
    b.display();
    cout<<endl;
    t=a.sum(b);
    cout<<"the  sum of data member of object a and b :";
    t.display();

}



