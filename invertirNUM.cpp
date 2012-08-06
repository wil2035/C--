#include <iostream> 
using namespace std; 

int main() { 
     int nro=0, aux=0, rpta=0; 
     cout<<"Ingrese un numero entero: "; 
     cin>>nro; 
     
     while(nro > 0){ 
               aux = nro % 10;
               nro = nro / 10; 
               rpta = (rpta * 10) + aux; 
               } 
               
     cout<<"El numero invertido es: "<<rpta<<endl; 
     
     system("pause");
     return 0;
     
}
