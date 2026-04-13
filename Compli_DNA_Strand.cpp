//Correxted code
//* Use "" for strings and '' for individual characters

#include<iostream>
#include<string>

using namespace std;

int main(){
    int T;
    int N;
    string S;

    cin >> T;
    while(T > 0){
        cin >> N;
        do{
            cin >> S;
        }while(S.length() != N);
        
        for(int i = 0; i < N ; i++){
            if(S[i] == 'A'){
                S[i] = 'T';
            }else if(S[i] == 'T'){
                S[i] = 'A';
            }else if(S[i] == 'C'){
                S[i] = 'G';
            }else{
                S[i] = 'C';
            }
        }
        cout << S << endl;
        T--;
    }
}
