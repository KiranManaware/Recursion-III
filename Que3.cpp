// Write a program to find the index of a given element in an array using recursion. If the element is present, return its index; otherwise, return -1.
#include<iostream>
using namespace std;
int indexFinder(int arr[],int n,int idx,int ele){
    if(idx==n) return -1;
    if(arr[idx]== ele)  return idx; 
    indexFinder(arr,n,idx+1,ele);
    
}
int main()
{
    int arr[]={3,5,6,1,7,8,2,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele=52;//enter that element in which you have to find thier index
    // bool flag=true;
    cout<<ele<<" has Index = "<<indexFinder(arr,n,0,ele);
    return 0;
}