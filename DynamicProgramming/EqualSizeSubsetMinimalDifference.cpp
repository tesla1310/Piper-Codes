//Minimum absolute difference between 2 non contiguous equal subarrays can have negative terms
//Input = 4 5 3 55 -3 23 3 20 100 90 
//output = 0. Explanation: {100, 20, 23, 4, 3} and {5, 55, -3, 3, 90}, both of which sum to 150

//https://stackoverflow.com/questions/38790990/minimum-absolute-difference-between-2-non-contiguous-equal-subarrays


#include <bits/stdc++.h>
using namespace std;



//size is current subset size 
// if current element selected size=size+1 if not the size=size
// sum is the the total sum
// curSum is the sum till current subset in consideration
// ans is the minimal difference
// here we evaluate range-2*(sum of single subset)
// for even n/2 and for odd n subset size will be n/2 ,n/2+1 but for odd only finding for n/2 will give the answer as one of the two will have n/2 sized subset

void solve(int size,int i,int curSum,int &ans,int arr[],int sum,int n){
    if(size==n/2){
        ans=min(ans,abs(sum-2*curSum));
        return;
    }
    if(i>=n){
        return;
    }
    //select current element
    solve(size+1,i+1,curSum+arr[i],ans,arr,sum,n);
    //not select current element
    solve(size,i+1,curSum,ans,arr,sum,n);
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int ans = INT_MAX;
    solve(0,0,0,ans,arr,sum,n);
    cout<<ans;

}
