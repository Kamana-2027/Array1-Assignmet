//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int a[n];
    cout<<"Enter element:";
    int i;
    bool flag=false;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]!=i+1)
        flag=true;
        cout<<i+1;
        break;
    }
    if(flag == false)
    cout<<"No missing element";
}

//--------Q6-------

//49 ,since for loop is empty , loop will break when the condition false and then the 49 will print