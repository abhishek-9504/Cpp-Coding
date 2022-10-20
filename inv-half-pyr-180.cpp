#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,n,k;
    cout<<"Enter number of rows :";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n;j>i+1;j--){
            cout<<" ";
        }
        for(k=0;k<i+1;k++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}