#include <iostream>
using namespace std;

int main(){
    
    int i,num,num2;
    cout<<"Escriba el primer numero: ";
    cin>>num;
    cout<<"Escriba el segundo numero (debe ser menor): ";
    cin>>num2;
    cout<<"-------------\n";
    cout<<"LA SERIE ES\n";
    cout<<"-------------\n";
            
    for(i=num;i>=num2;i--){
          
          cout<<i<<endl;
                        
    }
    system("pause");
    


}
