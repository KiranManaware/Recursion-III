// Given an integer array nums that may contain duplicates, return a possible subsets(the power set). The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 0:
// Input: nums = [0,2,2]
// Output: [[],[0],[0,2],[0,2,2],[2],[2,2]]
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
void go(vector<int> &a,int idx,vector<int> &temp,vector<vector<int>> &ans){
    ans.push_back(temp);
    for(int i=idx;i<a.size();i++){
        //pick
        if(i!=idx && a[i]==a[i-1]) continue;
        temp.push_back(a[i]);
        go(a,i+1,temp,ans); 
        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& a) {
    vector<int> temp;
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    go(a,0,temp,ans);
    return ans;
}
int main()
{
    vector<int> a={0,2,2};
    vector<vector<int>> v=subsetsWithDup(a); 
    for(int i=0;i<v.size();i++){
        cout<<"[";
       for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
       }
       cout<<"]"<<endl;
    }  
    return 0;
}