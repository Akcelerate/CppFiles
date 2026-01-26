//Uses vector array to perform digit-wise multiplication so as to not be hindered by limit of variable types

#include<iostream>
#include<vector>
using namespace std;

void multiply(vector<int> &product, int n){
    //using vector array for multiplication
}

void factorial(int n){
    //actual factorial function calling on "multipy" function to perform factorial multiplication
}

int main(){
    int t, n;
    
    do{
        cout << "\nTest cases: ";
        cin >> t;
    }while(t < 1  || t > 100);
    
    while(t--){
        do{
            cout << "\n Factorial of ";
            cin >> n;
        }while(n < 1 || n > 100);
        
        cout << " = " << factorial(n) << endl;
    }
}
