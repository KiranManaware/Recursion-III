// Write a program to find the sum of all elements in an array using recursion
#include<iostream>
using namespace std;
int sum(int arr[],int n,int idx,int res){
    if(idx==n) return res;
    res+=arr[idx];    
    sum(arr,n,idx+1,res);

}
int main()
{
    int arr[]={3,5,6,1,7,8,2,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=0;
    cout<<"Sum = "<<sum(arr,n,0,res);
    return 0;
}