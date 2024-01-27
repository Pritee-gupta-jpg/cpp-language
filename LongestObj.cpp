# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    public:
    void get();
    void display();
    void Compare(Integer &);
};
void Integer::get(){
    cin>>x;
}
void Integer::display(){
    cout<<x<<endl;
}
void Integer::Compare(Integer &t){
    if(t.x>x){
        x=t.x;
    }
    else{
        x=x;
    }
}


int main(){
    Integer p[10],s;
    int n;
    cout<<"enter the size of object you want to create\n";
    cin>>n;
    cout<<"enter "<<n<<"integer for"<<n<<"objects"<<endl;
    int i,j;
    for(i=0;i<n;i++){
        p[i].get();
    }
    s=p[0];
    for(i=1;i<n;i++){
        s.Compare(p[i]);
    }
    cout<<"the object data you entered are :";
    for(i=0;i<n;i++){
        p[i].display();
    }
    cout<<"the longest object among them is :";
    s.display();
    
    

}