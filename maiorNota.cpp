#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    float nota;
};
void ler(Aluno *a, int t){
    
    for(int i=0;i<t;i++){
       
          cin.ignore();
        std::getline (std::cin,a[i].nome);
        

        cin>>a[i].matricula;
         
        
        cin.ignore();
        cin>>a[i].disciplina;
         
        cin>>a[i].nota;
        
    }
}

void compara(Aluno *a, int t){
    if(a[0].nota == a[1].nota){
        cout<<a[0].nome<<" "<<"e"<<" "<<a[1].nome<<std::fixed<<std::setprecision(1)<<a[1].nota<<std::endl;
    }else if(a[1].nota>a[0].nota){
        cout<<a[1].nome<<""<<" , "<<""<<std::fixed<<std::setprecision(1)<<a[1].nota<< endl;
    }else if(a[0].nota>a[1].nota) {
        std::cout<<a[0].nome<<""<<" , "<<""<<std::fixed<<std::setprecision(1)<<a[0].nota<< endl;
    
}
}

int main(){
    int size =2;
   // cin>>size;
    Aluno alunos[size];
    ler(alunos, size);
    //saida(alunos, size);
    compara(alunos, size);
  
    return 0;
}
