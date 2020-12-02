#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};
void ler(Aluno *a, int t){
    
    for(int i=0;i<t;i++){
        cin>>a[i].nome;
         cin.ignore();
        cin>>a[i].matricula;
        
        cin.ignore();
        cin>>a[i].disciplina;
         cin.ignore();
        cin>>a[i].nota;
        cin.ignore();
    }
}

void compara(Aluno *a, int t){
    if(a[1].nota == a[2].nota){
        cout<<a[1].nome<<"e"<<a[2].nome<<a[1].nota<<std::endl;
    }else if(a[2].nota>a[1].nota){
        cout<<a[2].nome<<","<<a[2].nota<< endl;
    }else if(a[1].nota>a[2].nota){
        std::cout<<a[1].nome<<","<<a[1].nota<< endl;
    }
}

int main(){
    int size =2;
   // cin>>size;
    Aluno alunos[size];
    ler(alunos, size);
    
        cout<<alunos[1].nota<<"nota 1"<<alunos[2].nota<<"aluno 2"<<endl;
    
    
    compara(alunos, size);
  
    return 0;
}