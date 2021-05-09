//Fazer um algoritmo que verifica quantas vezes uma determinada letra aparece em uma frase.
#include <iostream>
using namespace std;

int main()
{
 string frase;
 char letra = 'a';
 int cont = 0; 

 frase ="Fazer um algoritmo que verifica quantas vezes uma determinada letra aparece em uma frase";
 
 for(int i = 0; i < frase.length(); i++)
    if(letra == frase[i]){
      cont++;
    }

  cout<<letra<<" e "<<cont;

}
