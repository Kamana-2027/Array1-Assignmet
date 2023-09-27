//Find the second largest element in the given Array in one pass.

#include<iostream>
#include<climits>
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
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<5;i++){
    if(max1<a[i]){
    max2=max1;
    max1=a[i];
}
    else if(max2<a[i] && a[i]!=max1){
    max2=a[i];
}
}
    if(max2==INT_MIN){
    cout<<"No second element exists"<<endl;
}
    else cout<<max2<<endl;
    return 0;


}