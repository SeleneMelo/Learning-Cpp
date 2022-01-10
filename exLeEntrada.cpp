
#include <iostream>
#include <vector>
#define MAX 100

using namespace std;

int main(){
	//entradas
  int n, input; //numero de nos
  vector<int> linha={0,0,0,0};
  vector<int> vec={0};
  int aux;
  cout<<"digite o numero de nos:" << endl;
  cin >> n;
  cout<<"digite os dados:" << endl;
  for(int i=0; i<n; ++i){
    for(int j=0; j<4; ++j){
      cin >> input;
      linha.push_back(input);
    }
    for(int k=0; k<4; ++k){
      linha[k] = aux;
      vec.push_back(aux);
    }

  }
  int tam = vec.size();
  
  cout << "tamanho do vetor:"<< endl;cout << tam << endl;
	return 0;
} 