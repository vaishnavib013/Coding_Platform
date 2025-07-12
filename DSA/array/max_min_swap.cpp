//WAF to Swap the max &  min number of an array
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={68,97,55,12,2};
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int max_i,min_i;
    for(int i=0;i<5;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            max_i=i;
        }
        if(mini>arr[i]){
            mini=arr[i];
            min_i=i;
        }
    }
    swap(arr[min_i],arr[max_i]);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}