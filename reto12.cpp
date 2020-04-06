//Pseudocódigo://
//1. Inicializar vector A//
//2. Inicializar prom_min = 10000//
//3. for (int P = 0; P < N-1; P++)//
//4. Retornar pos//

#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int> A){

    float prom_min=10000;
        int N=A.size();
        int pos;

    for(int P=0; P<N-1; P++){

        for(int Q=P+1; Q<N; Q++){
            float suma = 0;

            for(int i=P; i<=Q; i++){
                suma = suma + A[i];
            }

            float promedio = suma/(Q-P+1);

            if(promedio<prom_min){
                prom_min= promedio;
                pos=P;
            }
        }
    }

    return pos;

}

int main(){
    int res;
        vector<int> A{4,2,2,5,1,5,8};
        res=solution(A);
        cout<< res <<endl;

}