# include<bits/stdc++.h>
using namespace std;
struct complexN{
    int x;
    int y;
};
void add(complexN s[],int n){
    cout<<"enter the two coordinate "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i].x>>s[i].y;
    }
    int x1=s[0].x;
    int y1=s[0].y;
    int x2=s[1].x;
    int y2=s[1].y;
    int rx,ry;
    rx=x1+x2;
    ry=y1+y2;
    cout<<"the addition od two complex number is :"<<endl;
    cout<<rx<<"+i"<<ry<<endl;
};
void sub(complexN s[],int n){
    cout<<"enter the two coordinate "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i].x>>s[i].y;
    }
    int x1=s[0].x;
    int y1=s[0].y;
    int x2=s[1].x;
    int y2=s[1].y;
    int rx,ry;
    rx=x1-x2;
    ry=y1-y2;
    cout<<"the addition sub two complex number is :"<<endl;
    cout<<rx<<"i+"<<ry<<endl;
};

void mul(complexN s[],int n){
    cout<<"enter the two coordinate "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i].x>>s[i].y;
    }
    int x1=s[0].x;
    int y1=s[0].y;
    int x2=s[1].x;
    int y2=s[1].y;
    int rx,ry;
    rx=x1*x2-y1*y2;
    ry=x1*y1+x2*y2;
    cout<<"the addition mul two complex number is :"<<endl;
    cout<<rx<<"-i"<<ry<<endl;
};

int main(){
    complexN num[2];
   add(num,2);
   sub(num,2);
   mul(num,2);
   
}
