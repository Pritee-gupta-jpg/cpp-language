# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    Integer(int y){
        x=y;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
    Integer a(10),b(15);
    cout<<"the member data of a =";
    a.display();
    cout<<"the member data of  =";
    b.display();
}