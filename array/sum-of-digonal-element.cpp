#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum = 0;
    cout<<"enter order of matrix:\n ";
    cin>>n;
    int a[n][n];
    cout<<"enter elements of matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
}
    }
    for(int i=0;i<n;i++){
       sum += a[i][i];
    }
    for(int i=0;i<n;i++){
        sum += a[i][n-1-i];
    }
    cout<<"sum of diagonal elements is: "<<sum<<endl;   
}
