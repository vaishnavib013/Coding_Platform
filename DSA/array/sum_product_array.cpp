//WAF to calculate the sum and product of all numbers in an array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sum=0,prod=1;
    for(int i=0;i<5;i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<sum<<endl;
    cout<<prod;
    return 0;
}