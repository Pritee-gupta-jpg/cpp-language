# include<bits/stdc++.h>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int x=0,int y=0){
        this->x=x;
        this->y=y;
}
void display(){
    cout<<"x="<<x<<"and y="<<y<<endl;
    }
    point operator -(){
        point temp;
        temp.x=-x;
        temp.y=-y;
        return temp;
    }
};

int main(){
    point p1(4,-5),p2;
    cout<<"p1: ";
    p1.display();
    p2=-p1;
    cout<<"p2->-p1:";
    p2.display();
}








