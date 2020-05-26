#include<iostream>
#include<vector>

using namespace std;

int solution(vector<int> A){
int N = A.size();
int intersecciones = 0;

 for(int J = 0; J <= N-2; j++){
for(int K = j+1; K <= N-1; k++){
}
 }
 return intersecciones;
}

int main(){
 vector<int> entrada {1,5,2,1,4,0};
 cout << solution(entrada) << endl;
}