#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(int n){
    double f = 1;
    for(int i = 1; i<=n; i++){
        f*=i;
    }
    return f;
}

double euler(int n){

    double e = 0;
    for(int i=0;i<=n;i++){
        e =  1 + (1/fatorial(1)) + (1/fatorial(n));
    }
    

    return e;
}


int main(){

    int x = 0;
    cin>>x;
    cout<<fatorial(x)<<"\n"<<std::endl;
    std::cout<<std::fixed<<std::setprecision(12)<<euler(x)<<std::endl;


    return 0;
}
