//Uses vector array to perform digit-wise multiplication so as to not be hindered by limit of variable types

#include<iostream>
#include<vector>
//#include<algoritm> //to use 'reverse(fact.begin, fact.end());' instead of reversal by 'for loop'
using namespace std;

void multiply(vector<int> &product, int n){
    //using vector array for multiplication
    int carry = 0;
    for(int i = 0; i < product.size(); i++){
        int x = product[i] * n + carry;
        product[i] = x%10;
        carry = x/10;
    }
    while(carry != 0){
        product.push_back(carry%10);
        carry /= 10;
    }
}

void factorial(int n){
    //actual factorial function calling on "multipy" function to perform factorial multiplication
    vector<int> fact;
    fact.push_back(1);
    
    if(n == 0 || n == 1){
        ;
    }else{
        for(int i = 2; i <= n; i++){
            multiply(fact, i);
        }
    }
    
    for(int i = fact.size() - 1; i > -1; i--){
        cout << fact[i];
    }
}

int main(){
    int t, n;
    
    do{
        cout << "\nTest cases: ";
        cin >> t;
    }while(t < 1  || t > 100);
    
    while(t--){
        do{
            cout << "\n\n Factorial of ";
            cin >> n;
        }while(n < 1 || n > 100);
        
        cout << " = "; 
        factorial(n);
    }
}
