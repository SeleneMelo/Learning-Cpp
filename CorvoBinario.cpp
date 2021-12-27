
#include <cmath>
#include <iostream>
#include <string>
#include<vector>
using namespace std;

#define TAM 2000
/*int corvoBinario(int input[3]){
    int soma=0;
    for(int i=3; (i=0); --i){
      soma+=input[i] * pow(2,3-i);
      return soma;
    }
}
*/
int main(){
  string corvo;
  int count=0;
  int soma=0;
  int k;
  int resultado[3]={0,0,0};
  int input[3] = {0,0,0};
  
  //int loteria=0;
  cout<<"o corvo vai falar"<<endl;
  while(count<3){

    for(int i=0; i<TAM; ++i){
     cin >> corvo;
      //O CORVO PISCA OS 3 OLHOS
      for(int j=0;j<3;++j){
          
          if(corvo[j]=='-'){
            input[j]=0;
            cout<<"oi"<<endl;
          }
          if(corvo[j]=='*'){
            cout<<"bj"<<endl;
            input[j]=1;
          }
          cout<<input[i] << " "<<endl;
          
      }
      //CAW CAW
      if(corvo[0]!='*' && corvo[0]!='-'){                     
          cout<<"="<<endl;
          ++count;
          if(count==3){
            break;
         }
      }
      //CORVO EM BINARIO
      for(int k=2;k>=0;--k){
          soma+=input[k] * pow(2,2-k);
          resultado[k]=soma;
          //cout<<resultado[k]<<endl;
          soma=0;
      }      
        cout<<"+"<<endl;
  }
    
    }
    
    
    for(int k=0;k<3;++k){
        cout << "sorteado" << endl;
        cout << resultado[k] << endl;
    }
  cout << "o corvo falou" << endl;
  
  return 0;
}