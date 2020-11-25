#include <iostream>

using namespace std;


bool primo(int n){
    bool resp;
    int cont = 0;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            cont++;
            if(cont > 2){
                resp = false;

            }else{
                resp=true;
            }
            
        }else{
            resp = false;
        }

        
    }

    return resp;
}

int main(){
    int x = 0;
    cin>>x;
    cout<<primo(x);

    return 0;
}