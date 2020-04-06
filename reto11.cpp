//pseudocodigo
//1.inicializar las variables A,B y K
//2.Crear variable contador =0
//3.Crear un array con los numeros de A a B
//4.for(inicia en A, i<=B, i++)

#include<iostream>
#include<vector>
using namespace std;

int solution(int A, int B, int K)
{
//paso2
int cont=0;
//paso3
 for(int i = A; i <= B; i++)
 {
        //Paso 3.1
        if(i%K == 0)
        {
        //Paso 3.1.1- Contador aumenta
         cont = cont+1;
        }
    }
    //paso 4
    return cont;
}
int main()
{
    //paso 1
    int A,B,K;
    cout<<"valor de A"<<endl;
    cin>>A;
    cout<<"valor de B"<<endl;
    cin>>B;
    cout<<"valor de K"<<endl;
    cin>>K;
    cout<< "El resultado es" << endl;
    //Llamar a la funcion solucion//
    //Imprimir//
    int result;
    result = solution(A,B,K);
    cout<< result << endl;
}