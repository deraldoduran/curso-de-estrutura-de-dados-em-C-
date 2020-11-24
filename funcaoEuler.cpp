#include <iostream>

using namespace std;
int main(){

    int i = 0;

    cout<<"digite um numero";

    cin>> i;

    int x = 0;

    int fatorial = 1;

    double euler = 0;

    do
    {
       if (i == 0 or i ==1){
            i=1;
       }
            x++;

            fatorial *= x;

            cout<<"o x vale:" <<x<<std::endl;
            cout<<"o i vale:"<<i<<std::endl;
            cout<<"fatorial vale: "<<fatorial<<std::endl;

            euler=euler + (float)1+(1/fatorial);
            cout<<"euler vale:" <<euler<<std::endl;

       
       
        
        
    } while (x<i);
        
    
    


    return 0;
}



