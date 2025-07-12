#include<iostream>
using namespace std;
int main(){
   // int marks[5];
   int marks[5]={99,100,54,36,88};
   int size=5;
   //int marks[]={99,100,54,36,88};
   //int marks[20]={99,100,54,36,88};
   cout<<marks[0]<<endl;
   cout<<marks[1];
   cout<<marks[2];
   cout<<marks[3];
   cout<<marks[4]<<endl;
   //cout<<marks[5];//here there is no index of 5 so it may give garbage value or the warning.

    //0 to size-1
    //cout<<marks[-1]<<endl;
    
    //size of array->sizeof()
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(marks)/sizeof(int)<<"\n";
    
    //loops in Arrays
    for(int i=0;i<size;i++){
        cout<<marks[i]<<"\n";
    }
    
    //input of array from user
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    for(int i=0;i<size;i++){
        cout<<marks[i];
    }
    return 0;
}