//questionLink : https://leetcode.com/discuss/interview-question/762546/





//tc_code_lists = [
//[["apple", "apple"], ["banana", "anything", "banana"]],
//[["apple", "apple"], ["banana", "anything", "banana"]],
//[["apple", "apple"], ["banana", "anything", "banana"]],
//[["apple", "apple"], ["apple", "apple", "banana"]],
//[["apple", "apple", "apple"], ["banana", "anything"]],
//[["anything", "apple"], ["banana", "banana"]],
//]
//
//tc_shopping_carts = [
//["orange", "apple", "apple", "banana", "orange", "banana"],
//["banana", "orange", "banana", "apple", "apple"],
//["apple", "banana", "apple", "banana", "orange", "banana"],
//["apple", "apple", "apple", "banana"],
//["apple", "apple", "apple", "banana"],
//["graph", "apple", "peach", "banana"]
//]
//
//answers = [1, 0, 0, 0, 0, 0]

#include<bits/stdc++.h>
using namespace std;


int checkCode(vector<vector<string>>codeList,vector<string>shoppingCart){
    int i=0,j=0;
    //i for interpattern iteration
    //j for intra pattern iteration
    if(codeList.size()==0){
        return 1;
    }
    for(int k=0;k<shoppingCart.size();k++){
        if(codeList[i].size()==0){
            i++;
        }
        if(codeList[i][j]==shoppingCart[k]||codeList[i][j]=="anything"){
//            cout<<shoppingCart[k]<<" ";
            j++;
            //single pattern matched go for next
            if(codeList[i].size()==j){
                j=0;
                i++;
            }
            //all pattern obtained
            if(codeList.size()==i) {

                return 1;
            }
        }else{
            //no match so go to the begin+1 for k where we started matching to start mactching from next element and reset j for again matching in codelist
            k=k-j;
            j=0;



        }

    }
    return 0;
}
int main(){
    vector<vector<string>>codeList = {{"anything"},{},{"anything"}};
    vector<string>shoppingCart = {"graph", "apple", "peach", "banana"};
    cout<<checkCode(codeList,shoppingCart);

}
