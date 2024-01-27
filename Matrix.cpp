# include<bits/stdc++.h>
using namespace std;
class Matrix{
    private:
    int m=3,n=3;
    public:
     int arr3[3][3];
     int arr1[3][3];
    int arr2[3][3];
    void getArr1();
    void getArr2();
    void displayAdd(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        cout<<"Addition of two Matrix is :"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr3[i][j];
            }
            cout<<endl;
        }
    }
    };
    void Matrix::getArr1(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr1[i][j];
            }
        }
    }
    void Matrix::getArr2(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr2[i][j];
            }
        }
    }

    int main(){
        Matrix m;
        cout<<"enter the element of matrix 1 one by one :"<<endl;
        m.getArr1();
        cout<<"enter the element of matrix 2 one by one :"<<endl;
        m.getArr2();
        m.displayAdd();
    }





// # include<bits/stdc++.h>
// using namespace std;
// class Matrix{
//     private:
//     int m,n;
//     public:
//      int arr3[m][n];
//      int arr1[m][n];
//     int arr2[m][n];
//     void get();
//     void getArr1();
//     void getArr2();
//     void displayAdd(){
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 arr3[i][j]=arr1[i][j]+arr2[i][j];
//             }
//         }
//         cout<<"Addition of two Matrix is :"<<endl;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<arr3[i][j];
//             }
//             cout<<endl;
//         }
//     }
//     // void displayMul();
//     // void sortRow();
//     // int identity();
//     // int symmetric();

    
//     };
//     void Matrix::get(){
//         cin>>m>>n;
//     }
//     void Matrix::getArr1(){
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>arr1[i][j];
//             }
//         }
//     }
//     void Matrix::getArr2(){
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>arr2[i][j];
//             }
//         }
//     }
//     // void Matrix::displayAdd(){
//     //     for(int i=0;i<m;i++){
//     //         for(int j=0;j<n;j++){
//     //             arr3[i][j]=arr1[i][j]+arr2[i][j];
//     //         }
//     //     }
//     //     cout<<"Addition of two Matrix is :"<<endl;
//     //     for(int i=0;i<m;i++){
//     //         for(int j=0;j<n;j++){
//     //             cout<<arr3[i][j];
//     //         }
//     //         cout<<endl;
//     //     }
//     // }




//     int main(){
//         Matrix m;
//         cout<<"enter the row and column of two matrix(size should be same for addition): "<<endl;
//         m.get();
//         cout<<"enter the element of matrix 1 one by one :"<<endl;
//         m.getArr1();
//         cout<<"enter the element of matrix 2 one by one :"<<endl;
//         m.getArr2();
//         m.displayAdd();
//     }