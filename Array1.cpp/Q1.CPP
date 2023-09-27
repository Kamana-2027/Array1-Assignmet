//Calculate the product of all the elements in the given array.


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elemets:";
    int i,product=1;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        product=product*a[i];
    }
    cout<<product;


}