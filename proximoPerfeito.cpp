#include <iostream>
using namespace std;

int main(){
    int nperfeito=28, l = 0, soma=0;
    bool inc = true;
 

    while(inc ==true){
        l++;
        nperfeito++;
        if(nperfeito%l == 0){
            soma+=l;

        }if(soma == nperfeito){
            inc = false;

        }


    }

    cout<<"o numero perfeito eh: "<<nperfeito<<std::endl;
    return 0;
}