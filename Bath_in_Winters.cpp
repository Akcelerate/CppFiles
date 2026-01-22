#include<iostream>
using namespace std;
int main(){
    int T, X, Y;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 1000);
    
    while(T--){
        do{
            cout << "\nGyser and bucket capacities: ";
            cin >> X >> Y;
        }while((X&&Y) < 1 || (X&&Y) > 100);
        
        cout << "Max. bathable people: ";
        if(X >= 2*Y){
            cout << X/(2*Y) << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
