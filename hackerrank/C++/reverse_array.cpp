
#include <bits/stdc++.h>

using namespace std;

int main(){
     int n,i;
    cin>>n;
     int a[n];
    if(n<=1000 && n>=1){
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    }
    return 0;
}
    