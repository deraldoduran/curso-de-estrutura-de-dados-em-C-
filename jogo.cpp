# include <iostream>
using namespace std;

string saida(double vp[], double c[], char s[],int tam){
    string p = "primeiro";
    string e = "empate";
    string se = "segundo";
    double auxvp = 0;
    double auxc = 0;
    for(int i = 0; i<tam;i++){
        auxvp = vp[i];
        auxc = c[i];
        if(vp[i]==c[i]){
            return p;

        }else{
            if(c[i]<vp[i] and s[i]=='m'){
                return e;
            }else if(c[i]>vp[i] and s[i]=='M'){
                return e;
            }else if(s[i] == 'M' and c[i]<vp[i] and vp[i]<auxvp+1){
                return se;
            }else if(s[i] == 'm' and c[i]>vp[i] and vp[i]<auxvp-1){
                return se;
            }else if(s[i]=='M' and c[i]<vp[i] ){
                return p;
            }else if(s[i] == 'm' and c[i]>vp[i]){
                return p;
            }
        }
    }
    return p;
}

int main(){
    int const tam = 50;
    int produtos[tam];
    double valorProdutos[tam];
    double chutes[tam];
    char segundo[tam];
    int qtd = 0;
    cin>>qtd;

    for(int i = 0; i<qtd; i++){
        cin>>valorProdutos[i];
        cin>>chutes[i];
        cin>>segundo[i];
    }
    cout<<saida(valorProdutos,chutes,segundo, tam)<<std::endl;

    return 0;
}