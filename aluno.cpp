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
    for(int i=0;i<t;i++){
        cin>>a[i].nome;
        cin>>a[i].matricula;
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

    return 0;
}