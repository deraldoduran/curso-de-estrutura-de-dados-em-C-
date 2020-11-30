#include <iostream>
using namespace std;
struct JOGO {
    double valorProdutos;
    double chutes;
    char segundo;

};

void ler(struct JOGO j[], int t){
    for (int i = 0; i<t;i++){
        cin>>j[i].valorProdutos;
        cin>>j[i].chutes;
        cin>>j[i].segundo;
    }
}

string saida(struct JOGO *j,int tam){
    string p = "primeiro";
    string e = "empate";
    string se = "segundo";
    double auxvp = 0;
    double auxc = 0;
    for(int i = 0; i<tam;i++){
        auxvp = j[i].valorProdutos;
        
        if(j[i].valorProdutos==j[i].chutes){
            return p;

        }else{
            if(j[i].chutes<j[i].valorProdutos and j[i].segundo=='m'){
                return e;
            }else if(j[i].chutes>j[i].valorProdutos and j[i].segundo=='M'){
                return e;
            }else if(j[i].segundo == 'M' and j[i].chutes<j[i].valorProdutos and j[i].valorProdutos<auxvp+0.1){
                return se;
            }else if(j[i].segundo == 'm' and j[i].chutes>j[i].valorProdutos and j[i].valorProdutos<auxvp-0.1){
                return se;
            }else if(j[i].segundo=='M' and j[i].chutes<j[i].valorProdutos ){
                return p;
            }else if(j[i].segundo == 'm' and j[i].chutes>j[i].valorProdutos){
                return p;
            }
        }
    }
    return p;
}

int main(){

int jogadores;
cin>>jogadores;

struct JOGO individuo[jogadores];
ler(individuo, jogadores);
cout<<saida(individuo,jogadores)<<std::endl;

    return 0;
}
