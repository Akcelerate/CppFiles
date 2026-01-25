#include<iostream>
using namespace std;

//Only works for factorials <= 20
unsigned long long factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){
    int t, n;
    
    do{
        cout << "\nTest cases: ";
        cin >> t;
    }while(t < 1 || t > 100);
    
    while(t--){
        do{
            cout << "\nFactorial of ";
            cin >> n;
        }while( n < 1 || n > 100);
        
        cout << " = " << factorial(n) << endl;
    }
}
