# include <iostream>
using namespace std;

int buscaNmaior(int **m, int l, int c){
    int aux1 = 0;
    int aux2 = 0;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    for(int j =0; j<c-1; j++){
        aux1 = m[1][j];
        aux2 = aux1;
        if(aux2<m[1][j+1]){
            flag1 = 1;

        }
    }
         aux1 = 0;
         aux2 = 0;
        for(int j =0; j<c-1; j++){
        aux1 = m[2][j];
        aux2 = aux1;
        if(aux2<m[2][j+1]){
            flag2 = 1;

        }
    }
         aux1 = 0;
         aux2 = 0;
         for(int j =0; j<c-1; j++){
        aux1 = m[3][j];
        aux2 = aux1;
        if(aux2<m[3][j+1]){
            flag3 = 1;
        }
    }
    int result = flag1+flag2+flag3;
    return result;
}


int main(){
int l = 3, c = 3;
int **mat = new int*[l];
for (int i = 0; i<l; i++){
    int *aux = new int[c];
    mat[i] = aux;
    for(int j=0; j<c;j++){
        cin>>mat[i][j];
    }
}
    cout<<buscaNmaior(mat,l,c);
    return 0;
}