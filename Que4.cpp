// Print all the elements of an array in reverse order using recursion
#include<iostream>
using namespace std;
void reverseArr(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[n-1]<<" ";
    reverseArr(arr,n-1,idx);
}
int main()
{
    int arr[]={3,5,6,1,7,8,2,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,n,0);
    return 0;
}