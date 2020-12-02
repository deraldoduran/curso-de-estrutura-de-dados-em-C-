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
        
        cin>>a[i].matricula;
        
        cin.ignore();
        cin>>a[i].disciplina;
        cin>>a[i].nota;
        cin.ignore();
    }
}
void saida(Aluno *alunos, int size){
      for (int i=0;i<size;i++){
        if(alunos[i].nota>=7){
            cout<<alunos[i].nome<<" "<<"aprovado(a) em"<<" "<<alunos[i].disciplina<<std::endl;
        }else{
            cout<<alunos[i].nome<<" "<<"reprovado(a) em"<<" "<<alunos[i].disciplina<<std::endl;
        }
        
    }
}

int main(){
    int size =1;
   // cin>>size;
    Aluno alunos[size];
    ler(alunos, size);
    saida(alunos, size);
  
    return 0;
}
