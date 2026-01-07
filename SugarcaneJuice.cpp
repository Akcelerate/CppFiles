#include<iostream>
//#include<iomanip>
//#include<cmath>
using namespace std;
int main(){
   int T, N, C;
//   int P = pow(10, 6);
   
   do{
       cout << "\nTest cases: ";
       cin >> T;
   }while(T < 1 || T > 1000);
   
   while(T > 0, T--){
        do{    
            cout << "\nNo. of glasses sold: ";
            cin >> N;
        }while(N < 1 || N > 1000000);
        C = N*50;
        cout << "\nTotal earning: " << C;
        cout << "\nNet Profit: ";
//        cout << setprecision(0);
        cout << endl << static_cast<long long>(0.3*C);
   }
}
