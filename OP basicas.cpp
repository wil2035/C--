#include <iostream>
using namespace std;

main()
{     
      int num,num2,sum,mult,rest,op;
      long int div;
      cout<< "OPERACIONES BASICAS\n";
      cout<<"Ingrese dos numeros seguidos de enter\n";
      cin>>num;
      cin>>num2;
      MENU:
      cout<<"¿QUE QUIERE HACER CON LOS NUMEROS??\n";
      cout<<"DIGITE 1 A 4 SEGUN SU OPCION\n";
      cout<<"1\t suma\n";
      cout<<"2\t resta\n";
      cout<<"3\t multiplicacion\n";
      cout<<"4\t division\n";
      cin>>op;
      if(op>=1&&op<=4){
          switch(op){
                    case 1:
                         cout<<"Resultado SUMA:\n";
                         sum=num+num2;
                         cout<<sum<<endl;
                         break;
                    case 2:
                         cout<<"Resultado RESTA:\n";
                         rest=num-num2;
                         cout<<rest<<endl;
                         break;
                    case 3:
                         cout<<"Resultado MULTIPLICACION:\n";
                         mult=num*num2;
                         cout<<mult<<endl;
                         break;
                    case 4:
                         cout<<"Resultado DIVISION:\n";
                         div=num/num2;
                         cout<<div<<endl;
                         break;       
                    }
          }
          else{
               cout<<"......................\n";
               cout<<"...OPCION NO VALIDA...\n";
               cout<<"......................\n";
               goto MENU;
               }          
      
      system("pause");
      return 0;
      
}
