# include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};
void ler(Aluno *a, int t){
   // cout<<"dentro da funcao ler"<<endl;
    for(int i=0;i<t;i++){
        cin>>a[i].nome;
       // cout<<a[i].nome<<endl;
        cin>>a[i].matricula;
       // cout<<a[i].matricula<<endl;
        cin.ignore();
        cin>>a[i].disciplina;
        cin>>a[i].nota;
        cin.ignore();
    }
}

int main(){
    int size;
    cin>>size;
    Aluno alunos[size];
    ler(alunos, size);
    for (int i=0;i<size;i++){
        if(alunos[i].nota>7){
            cout<<alunos[i].nome<<"aprovado(a) em"<<alunos[i].disciplina<<std::endl;
        }else{
            cout<<alunos[i].nome<<"reprovado(a) em"<<alunos[i].disciplina<<std::endl;
        }
        
    }
    return 0;
}
