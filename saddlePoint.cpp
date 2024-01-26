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
    int sadle;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int val=arr[i][j];
            sadle=1;
            for(int k=0;k<n;k++){
                if(val<arr[i][k]){
                    sadle=0;
                    break;
                }
            }
            for(int k=0;k<m;k++){
                if(val<arr[k][i]){
                    sadle=0;
                    break;
                }
            }
            if(sadle){
                cout<<"the sadle point is "<<val<<endl;
                exit(0);
            }
        }
    }
        
    cout<<"sadle point doesnot exit"<<endl;
}
