//Question link
//https://codeforces.com/contest/1426/problem/B
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,m;
        bool flag =false;
        cin>>n>>m;
        while(n--){
            int arr[2][2];
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cin>>arr[i][j];
                }
            }
            if(arr[0][1]==arr[1][0])flag=true;
        }
        if(m%2==0 && flag == true){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}