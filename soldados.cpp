# include <iostream>
using namespace std;




int main(){
int l = 3, c = 3;
int vet[3];
int soma= 0;
int **mat = new int*[l];
for (int i = 0; i<l; i++){
    int *aux = new int[c];
    mat[i] = aux;
    for(int j=0; j<c;j++){
        cin>>mat[i][j];
        vet[i]=0;
    }
}
    //imprime matriz
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
           // cout<<mat[i][j]<<"\t";
            
            //cout<<vet[i];
        }
    }

    //comparacoes
   for (int i=0; i<c ; i++) {
        for (int j=l-2 ;j>-1; j-- ) {
            for (int k=0; k<c ; k++ ) {
                if(mat[k][i] > mat[j][i] and k<j){
                    vet[i]=1;
                }
            }
        }

    }

    //soma vetor
    for(int i = 0; i<3;i++){
        //cout<<vet[i];
        soma+=vet[i];

    }
    cout<<soma;

    return 0;
}
