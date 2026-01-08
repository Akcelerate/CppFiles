#include<iostream>
using namespace std;
int main(){
    int T, P, Q, R, S;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 5000);
    
    while(T > 0, T--){
        do{
            cout << "\nCompany A profits: ";
            cin >> P;
        }while(P < 1 || P > 100);
        do{
            cout << "\nCompany B profits: ";
            cin >> Q;
        }while(Q < 1 || Q > 100);
        do{
            cout << "\nCompany C profits: ";
            cin >> R;
        }while(R < 1 || R > 100);
        do{
            cout << "\nCompany D profits: ";
            cin >> S;
        }while(S < 1 || S > 100);
        
        if((P > Q+R+S) || (Q > P+R+S) || (R > P+Q+S) || (S > P+Q+R)){
            cout << "\nYes";
        }else{
            cout << "\nNo";
        }
    }
}
