#include <iostream>
using namespace std;

int main(){
 int n, tam, diamante, aux;
 string linha;
 cout<<"digite o num"<<endl;
 cin >> n;

for (int i = 0; i < n; ++i){
	cin >> linha;
	tam = linha.length();
	diamante = 0;
	aux = 0;
	for (int j = 0; j < tam; ++j){
      		if(linha[j] == '<')aux++;
      		if (linha[j] == '>' && aux > 0){
        		diamante++;
        		aux--;
      		}
    	}	
    cout<<diamante<<endl;
    diamante=0;
  }
  return 0;
 }