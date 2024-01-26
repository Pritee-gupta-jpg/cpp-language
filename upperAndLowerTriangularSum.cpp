#include<bits/stdc++.h>
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
 
 int sumUpper=0,sumLower=0;
 for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
         if(j>i){
             sumUpper+=arr[i][j];
         }
         if(i>j){
             sumLower+=arr[i][j];
         }
     }
 }
 cout<<"sum of Upper triangular matrix is"<<sumUpper<<endl;
 cout<<"sum of Lower triangular matrix is "<<sumLower<<endl;
    
}
