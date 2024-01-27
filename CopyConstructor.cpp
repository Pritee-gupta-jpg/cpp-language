# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    Integer(int x){
        this->x=x;
    }
    Integer(Integer &a){
        x=a.x;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
    Integer a(5);
    cout<<"member data of a=";
    a.display();
    Integer b(a);
    
    cout<<"member data of b =";
    b.display();
}