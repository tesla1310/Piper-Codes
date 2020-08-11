//Find Nth even length palindromic number formed using digits X and Y
//See explaination first here
//https://www.geeksforgeeks.org/find-nth-even-length-palindromic-number-formed-using-digits-x-and-y/

//Given an integer N, the task is to find the Nth even palindromic number of even length and only comprising of the digits X and Y where X, Y > 0.

//Input: N = 9, X = 4, Y = 5
//Output: 454454
//Explanation:
//Even length palindromic numbers using 4 & 5 are
//44, 55, 4444, 4554, 5445, 5555, 444444, 445544, 454454, …
//9th term of the above series = 454454

//Input: N = 6, X = 1, Y = 2
//Output: 2222
//Explanation:
//Even length palindromic numbers using 1 & 2 are
//11, 22, 1111, 1221, 2112, 2222, 111111, 112211, 121121, …
//6th term of the above series = 2222


//code 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int m = n;
    int p = 2;
    int i=1;
    int prev;
    //getting length of answer and also the rank in that particular length (0,1,2,3)
    while(m>0){
        prev=m;
        m=m-p;
        p=p*2;
        i++;
    }
    //lentgth
    int L = 2*(i-1);
    
    // we have to see just the first half
    
    //rank
    // if prev(rank) is 4 that means we can form number by 4-1=3(011) binay formation
    int left = prev-1;
    int arr[L];
    i=0;

    //forming number for left half only cz its palindrome
    while(i<L/2){
        if(left&1){
            arr[L/2-i-1]=y;
            arr[L/2+i]=y;
        }else{
            arr[L/2-i-1]=x;
            arr[L/2+i]=x;
        }
        left=left>>1;
        i++;
    }
    int ans = 0;
    for(int j=0;j<L;j++){
        ans=ans*10+arr[j];
    }
    cout<<ans;
    return 0;
}
