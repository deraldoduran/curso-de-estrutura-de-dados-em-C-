# include <iostream>

using namespace std;

void alimentamat(int **m, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin>>m[i][j];
        }
    }
}

void printmat(int **n, int l, int c){
    for(int i = 0; i<l; i++){
        for(int j = 0; j < c; j++){
            cout<<"matriz :"<< n[l][c]<<"\t";
        }
    }
}

void alimentavet(int *v, int t){
    for(int i = 0; i < t; i++){
        cin>>v[i];
    }
}

void printvet(int *v, int t){
    for(int i =0; i < t; i++){
        cout<<"vetor "<<v[i]<<"\t";
    }
}
bool somaLinha(int *v, int t){
    int slinha1 = 0;
    int slinha2 = 0;
    int slinha3 = 0;
    for(int i = 0; i<3;i++){
        slinha1 +=v[i];
    }
    for(int i = 3; i<6;i++){
        slinha2 +=v[i];
    }
    for(int i = 6; i<9;i++){
        slinha3 +=v[i];
    }
    if(slinha1 == slinha2 and slinha2 == slinha3){
        return true;
    }
    return false;
}

bool somacoluna(int *v, int t){
    int scoluna1 = 0;
    int scoluna2 = 0;
    int scoluna3 = 0;
    for(int i = 0; i < t; i+=3){
        scoluna1 += v[i];
        //cout<<scoluna1<<std::endl;
    }
    for(int i = 1; i < t; i+=3){
        scoluna2 += v[i];
    }
    for(int i = 2; i < t; i+=3){
        scoluna3 += v[i];
    }
    if(scoluna1 == scoluna2 and scoluna2 == scoluna3){
        return true;
    }
    return false;
}

bool somadiagonal(int *v, int t){
    int sdiagonal1 = 0;
    int sdiagonal2 = 0;
    for(int i =0; i < t; i+=4){
        sdiagonal1 += v[i];
    }
    for(int i =2; i < t-1; i+=2){
        sdiagonal2 += v[i];
    }
    if(sdiagonal1 == sdiagonal2){
        return true;
    }
    return false;
}

int main(){

    const int l = 3;
    const int c = 3;

    int mat[l][c] ;
    int vetl[9];
    int vetc[c];

    alimentavet(vetl,9);
    //alimentavet(vetc, c);
    //somaLinha(vetl,9);


    printvet(vetl,9);
    cout<<"foi o vetor l"<<std::endl;
    cout<<"\n";

   // printvet(vetc,c);
    cout<<somaLinha(vetl,9)<<std::endl;
    cout<<somacoluna(vetl,9)<<std::endl;
    cout<<somadiagonal(vetl,9)<<std::endl;


    return 0;
}