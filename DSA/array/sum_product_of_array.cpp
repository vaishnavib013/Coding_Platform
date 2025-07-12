//Reverse an Array by 2 PointerApproach
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}