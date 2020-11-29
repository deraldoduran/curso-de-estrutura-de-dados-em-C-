# include <iostream>
using namespace std;

bool ordenaVetor( int v[], int t){
    //int aux = v[0];
    int m = t;
    int cont = 0;
    for(int i =0; i<m;i++){
        for(int j = i+1; j<=m; j++){
            
            if(v[i] <= v[j] and v[i+2]<v[j+2]){
               // cout<<v[i]<<"\t"<<endl;
                //cout<<v[j];
                //cout<<v[i+2];
                //cout<<v[j+2];
                    cont++;
                
                

            }else if(v[i] > v[j] and v[i+2] == 0){
                    cont++;
                }else if(v[i] < v[j]){
                    cout<<v[i]<<"\t"<<endl;
                    cont++;
                }
        }
    }
    
    if(cont == t){
        return true;
    }
    return false;
}

int main(){
    int tam = 0;
    cin>>tam;
    if(tam>1){
    int vet[tam];
     for(int i = 0; i<tam; i++){
        cin>>vet[i];
        cout<<vet[i]<<"\t";
    }
    

   
    if(ordenaVetor(vet,tam)){
        cout<<"ok"<<std::endl;
    }else{
        cout<<"precisa de ajuste"<<std::endl;
    }
}else{
    cout<<"ok"<<std::endl;
}

    return 0;
}