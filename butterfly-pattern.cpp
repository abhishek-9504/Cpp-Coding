#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,n,k,l;
    cout<<"Enter number of rows :";
    cin>>n;
    for(i=0;i<n;i++){
       for(j=0;j<i+1;j++){
        cout<<"# ";
       }
       int s = 2*n - 2*(i+1);
       for(j=0;j<s;j++){
        cout<<" ";
       }
       for(j=0;j<i+1;j++){
        cout<<"# ";
       }
       cout<<endl;
    }
    for(i=n;i>0;i--){
       for(j=0;j<i+1;j++){
        cout<<"# ";
       }
       int s = 2*n - 2*(i+1);
       for(j=0;j<s;j++){
        cout<<" ";
       }
       for(j=0;j<i+1;j++){
        cout<<"# ";
       }
       cout<<endl;
    }
    return 0;
}