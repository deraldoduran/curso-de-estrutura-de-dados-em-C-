# include <iostream>
using namespace std;




int main(){
int l = 3, c = 3;
int vet[4] ={0,0,0,0};
int soma= 0;
int **mat = new int*[l];
for (int i = 0; i<l; i++){
    int *aux = new int[c];
    mat[i] = aux;
    for(int j=0; j<c;j++){
        cin>>mat[i][j];
        //vet[i]=0;
    }
}
    //imprime matriz
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
           // cout<<mat[i][j]<<"\t";
            
            //cout<<vet[i];
        }
    }
    int cont = 0;

    //comparacoes
   for (int i=0; i<l-2 ; i++) {
                    for (int k=0; k<c ; k++ ) {
                if(mat[i][k] > mat[i+1][k]){
                    cont++;
                }if(mat[i+1][k]>mat[i+2][k]){
                    cont++;
                }
            }
        }

    

    //soma vetor
    for(int i = 0; i<4;i++){
        //cout<<vet[i];
        soma+=vet[i];

    }
    cout<<cont;

    return 0;
}
