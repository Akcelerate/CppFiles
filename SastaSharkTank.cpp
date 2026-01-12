#include<iostream>
using namespace std;

//Void is what'll work in codechef due to some "Tie limit exceeded" error that pops up with the one in 'int main()' part.

void alternative(){
    int T, A, B;
    cin >> T;
    while(T--){
        cin >> A >> B;
        if(2*A == B){
            cout << "Any\n";
        }else if(2*A > B){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }
}

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
