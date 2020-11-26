# include <iostream>

using namespace std;

int main(){
    int x = 0;
    int y = 0;

    cin>>x;
    cin>>y;

    for(int i = x+1; i < y; i++){
        int flag = 1;
        for(int j = 2; j < i; j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag){
            cout<<i<<std::endl;
        }
    }  


    return 0;
}