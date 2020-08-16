#include <bits/stdc++.h>
using namespace std;

class x{
private:
    static x* instance;
    x(){}
public:

    //it will only let pass a single instance;
    static x* getInstance(){
        if(instance==0){
            instance = new x();
        }
        return instance;
    }

    static void resetInstance(){
        instance=0;
    }
};

//initialise a instance with 0 so that we can start a single instnace
x* x::instance = 0;


int main(){
    x* one = x::getInstance();
    x* two = x::getInstance();
    
    //resetting instance;
    x::resetInstance();
    x* three = x::getInstance();
    x* four = x::getInstance();


    cout<<one<<endl;
    cout<<two<<endl;
    cout<<three<<endl;
    cout<<four<<endl;
}
