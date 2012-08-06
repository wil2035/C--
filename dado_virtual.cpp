#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
  int caras;
  cout << "------------------------------------------------------------" << endl;
  cout << "                        DADO VIRTUAL" << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "Escriba el numero de las caras del DADO" << endl;
  cin >> caras;
  
  for (int i =1 ; i <=1 ; i++)
    {
      cout << "El numero aleatorio entre 1 y "<<caras<<" es: "<<endl;
      cout << (1+rand() % caras);
    }
  system("pause");  
  return 0 ;
}
