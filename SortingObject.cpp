/*
error is coming in this program ,will try to solve later

*/


# include<bits/stdc++.h>
using namespace std;
class Integer{
    private:
    int x;
    // int n;
    // int arr[n];
    public:
    void get();
    void display();
    void Compare(Integer &);
};

void Integer::get(){
    cin>>x;
}

void Integer::display(){
    cout<<x<<"\t";
}
void Integer::Compare(Integer &t){
    if(t.x<x){
        x=t.x;
    }
    else{
       this->x=x;
    }
}

// 
int main(){
    Integer p[10],s;
    int n,temp;
    int i,j;
    cout<<"enter the number of objects :"<<endl;
    cin>>n;
    cout<<"enter the data of object one by one :"<<endl;
    for(i=0;i<n;i++){
        p[i].get();
    }

    for(i=0;i<n;i++){
        s=p[i];
        for(j=i+1;j<n;j++){
            s.Compare(p[j]);
        }
        s.display();
        
    }
}