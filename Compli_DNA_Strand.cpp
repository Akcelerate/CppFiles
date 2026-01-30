//For some reason out of logic operation being executed 
//G changes to A, but that logic is not specified
//Specified logic: G change to C

#include<iostream>
#include<string>
using namespace std;
int main(){
    int T, N;
    string S;

    cout << "\nTest cases: ";
    cin >> T;
    
    while(T--){
        cout << "\nNo. of nucleotides: "; 
        cin >> N;
        do{
            cout << "\nDNA sequence: ";
            cin >> S;
  //Add condition so that only {A, T, G, C} are allowed in S
        }while(S.length() != N);
        
        for(int i = 0; i < N; i++){
            if(S[i] == 'A'){
                S[i] = 'T';
                goto n;
            }else if(S[i] == 'C'){
                S[i] = 'G';
                goto n;
            }else if(S[i] = 'T'){
                S[i] = 'A';
            }else{
                S[i] = 'C';
            }
            n:;
        }
        
        cout << S << endl;
    }
}
