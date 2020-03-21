#include <stdlib.h>
#include<iostream>
#include<vector>

using namespace std;

int solution(vector<int> A){
    int min = 100000000; //Maximo//
    int N = A.size(); //Numero de entero//

    for(int P = 1; P < N; P++){
        vector<int> parte1(A.begin(), A.end()-(N-P));
        vector<int> parte2(A.begin()+P, A.end());
        /*for(int i = 0; i < parte1.size(); i++){
           cout<<parte1[i]<< ", ";
        }
        cout<<endl;
        for(int i = 0; i < parte2.size(); i++){
            cout<<parte2[i]<< ", ";
        }
        cout<<endl;
        */
        int suma1 = 0; //Suma total//
        for(int i = 0; i < parte1.size(); i++){
           suma1 = suma1 + parte1[i];
        }

        int suma2 = 0; //Suma total//
        for(int i = 0; i < parte2.size(); i++){
           suma2 = suma2 + parte2[i];
        }

        int valorActual = abs(suma1 - suma2);

          //  cout<<valorActual<<endl;//
        }

        if (valorActual < min){
			min = valorActual;
        }

    }

    return min;

}

int main(){
    vector<int> A{3, 1, 2, 4, 3};
    cout << solution(A) << endl;
}