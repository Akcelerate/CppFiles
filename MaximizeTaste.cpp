#include<iostream>
using namespace std;
int main(){
    int T, a, b, c, d, m;
    
    do{
        cout << "\nTest cases: ";
        cin >> T;
    }while(T < 1 || T > 100);
    
    while(T--){
        do{
            cout << "\nTastiness of dish A: ";
            cin >> a;
        }while(a < 1 || a > 100);
        do{
             cout << "\nTastiness of dish B: ";
             cin >> b;
        }while(b < 1 || b > 100);
        do{
             cout << "\nTastiness of dish C: ";
             cin >> c;
        }while(c < 1 || c > 100);
        do{
             cout << "\nTastiness of dish D: ";;
             cin >> d;
        }while(d < 1 || d > 100);
        
        cout << "\nMaximum possible tastiness: ";
        if(a > b){
            m = a;
        }else{
            m = b;
        }
        if(c > d){
            m += c;
        }else{
            m += d;
        }
        cout << m << endl;
    }
}
