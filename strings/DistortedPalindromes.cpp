//https://www.codechef.com/problems/ENCD12

#include <bits/stdc++.h>
using namespace std;

bool possible(string s){
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    int odd=0;
    for(int i=0;i<26;i++){
        if(arr[i]&1){
            odd++;
        }
        if(odd==1 && s.size()%2==0){
            return false;
        }
        if(odd>1){
            return false;
        }

    }
    return true;
}

int swaps(string s){
    int ans=0;
    for(int i=0;i<s.size()/2;i++){
        int j=s.size()-1-i;
        while(j>i&s[i]!=s[j]){
            j--;
        }
        for(int k=j;k<s.size()-i-1;k++){
            swap(s[k],s[k+1]);
            ans++;
        }
    }
    return ans;
}
int main(){
    string s;
    while(1){
        cin>>s;
        if(s=="0"){
            break;
        }
        if(possible(s)){
            cout<<swaps(s);
        }else{
            cout<<"Impossible";
        }
        cout<<endl;
    }

}
