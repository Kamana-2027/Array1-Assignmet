//Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elemets:";
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int j;
    bool flag=false;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
            flag=true;
            cout<<a[i];
            break;
            }
        }
    }
    if(flag == false)
    cout<<"No Duplicates";

}