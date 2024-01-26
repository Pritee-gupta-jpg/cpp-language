# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the row and col of a matrix"<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"ente rthe elememn oof array one by one"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int check=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            if((arr[i][j]!=arr[j][i])||(arr[i][j]!=0)||(arr[j][i]!=0)){
                check=0;
            }
        }
    }
    if(check){
    for(int i=1;i<=m;i++){
        if(arr[i][i]==1){
            check=1;
              cout<<"identity matrix"<<endl;
              exit(0);
        }
    }
    }
    
    // if(check){
    //     cout<<"identity matrix"<<endl;
    // }
   // else{
        cout<<"not an identity matrix"<<endl;
    //}
    
    
    
    
    
    
    
    
    
}
