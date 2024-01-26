# include<bits/stdc++.h>
using namespace std;
struct point{
    int x;
    int y;
};
void countCordinate(point p[],int n){
    cout<<"enter the coordinate of 10 point"<<endl;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
    for(int i=0;i<n;i++){
        int a=p[i].x;
        int b=p[i].y;
        float r2= (pow(a,2)+pow(b,2));
        float r1=5*5;
        if(r1==r2){
            cout<<"point lies on the circle is:"<<p[i].x<<p[i].y<<endl;
        }
        else if(r1>r2){
            cout<<"point lie inside the circle is :"<<p[i].x<<p[i].y<<endl;
        }
        else{
            cout<<"point lie outside the circle is :"<<p[i].x<<p[i].y<<endl;
        }
    }
    
}
int main(){
    point p[10];
    countCordinate(p,10);
}
