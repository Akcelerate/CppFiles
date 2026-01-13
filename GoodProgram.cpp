#include<iostream>
using namespace std;
int main(){
    int T, N;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T--){
        do{
            cout << "\nNibbles: ";
            cin >> N;
        }while(N < 1 || N > 1000);

      //Incorrect logic; Incorrect output in case: T=1, N=2 ?;  How?
        if(N%4 == 0){
            cout << "\nGood";
        }else{
            cout << "\nNot Good";
        }
    }
}
