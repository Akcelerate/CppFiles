#include<iostream>
using namespace std;
int main(){
    
    int N;
    do{
        cout << "\nNo. of soldiers: ";
        cin >> N;
    }while(N < 1 || N > 100);
    
    const int n = N;
    int A[n];
    int even = 0;
    for(int i = 0; i < N; i++){
        do{    
            cout << "\nWeapons on soldier " << i << ": ";
            cin >> A[i];
        }while(A[i] < 1 || A[i] > 101);
        if(A[i]%2 == 0){
            even += 1;
        }else{}
    }
    if(even > N/2){
        cout << "\nREADY FOR BATTLE";
    }else{
        cout << "\nNOT READY";
    }
}
