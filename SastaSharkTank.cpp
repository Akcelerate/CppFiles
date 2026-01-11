#include<iostream>
using namespace std;
int main(){
    int T, A, B;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        int T;
        float A, B;
        
        do{
            cout <<< "\nTest cases";
            cin >> T;
        }while(T < 1 || T > 100);
        
        while(T--){
            do{
                cout << "\nFor 10\% of company, offer 1: ";
                cin >> A;
            }while(A < 100 || A > 10000);
            do{
                cout << "\nFor 20\% of compnany, offer 2: ";
                cin >> B;
            }while(B < 100 || B > 10000);
            
            float a = A*10;
            float b = B*5;
            if(a == b){
                cout << "\nAny";
            }else if(a > b){
                cout << "\nFirst";
            }else{
                cout << "\nSecond";
            }
        }
    }
}
