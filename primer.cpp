#include <iostream>
using namespace std;

main()
{
      int num,num2,num3,num4,sum,rest,mulp;
           
      cout<<"Ingrese un numero ";
      cin>>num;
      cout<<"Ingrese un numero ";
      cin>>num2;
      cout<<"Ingrese un numero ";
      cin>>num3;
      cout<<"Ingrese un numero ";
      cin>>num4;
      //suma
      cout<<"la SUMA de los dos primeros numeros es...";
      sum=num+num2;
      cout<<sum <<"\n";
      //resta
      cout<<"La RESTA del 3 y 4 numeros es... ";
      rest=num3-num4;
      cout<<rest <<endl;
      //multiplicacion
      cout<<"La multiplicacion de los resultado es: ";
      mulp=sum*rest;
      cout<<mulp <<endl;
      
      system("pause");
      return 0;
}
