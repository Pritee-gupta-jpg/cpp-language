# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    void get();
    void display();
    void sum(Integer &);
};
void Integer:: get(){
    cin>>x;
}
void Integer::display(){
    cout<<x<<endl;
}
void Integer::sum(Integer &b){
    x+=b.x;
}
int main(){
    Integer a[10],s;
    int n,i;
    cout<<"enter the number of object :"<<endl;
    cin>>n;
    cout<<"enter n integers"<<endl;
    for(i=0;i<n;i++){
        a[i].get();
    }
    cout<<"the value of integer you entered :";
    for(i=0;i<n;i++){
        a[i].display();
    }
    cout<<"sum of n integer :"<<endl;
   // s=a[0];
    for(i=0;i<n;i++){
        s.sum(a[i]);
    }
    s.display();
}