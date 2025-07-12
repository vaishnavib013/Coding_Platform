#include <iostream>
#include <climits>
using namespace std;
int LS(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int key;
    cout<<"Enter the key elemnt:";
    cin>>key;
    cout<<LS(arr,size,key);
    return 0;
}
