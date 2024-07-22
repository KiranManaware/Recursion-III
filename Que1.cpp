//  Write a program to find the minimum element of an array using recursion
#include<iostream>
#include<climits>
using namespace std;
int minEle(int arr[],int n,int idx,int min){
    if(idx==n) return min;
    if(arr[idx]<min)  min=arr[idx];
    minEle(arr,n,idx+1,min);

}
int main()
{
    int arr[]={3,5,6,1,7,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Minmun element = "<<minEle(arr,n,0,INT_MAX);

    return 0;
}
