# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x[5];
    public:
    void get();
    void display();
};
void Integer:: get(){
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
}
void Integer::display(){
    for(int i=0;i<5;i++){
        cout<<x[i]<<"\t";
    }
}

int main(){
    Integer s;
    cout<<"enter five element of int type for data memeber of object :";
    s.get();
    cout<<"the data memeber value of five int type is :";
    s.display();
}









