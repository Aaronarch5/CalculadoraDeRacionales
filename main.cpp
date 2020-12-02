#include <iostream>
#include <string>
#include "Racional.h"
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int numeradorTemp,denominadorTemp,numeradorTemp2,denominadorTemp2,selector{0};
    bool salir{0};
    do
    {
    cout<<"Inserte denominador y numerador para la fracción 1"<<endl;
    cout<<"Inserte el numerador"<<endl;
    cin>>numeradorTemp;
    cout<<"Inserte el denominador"<<endl;
    cin>>denominadorTemp;

    cout<<"Inserte denominador y numerador para la fracción 2"<<endl;

    cout<<"Inserte el numerador"<<endl;
    cin>>numeradorTemp2;
    cout<<"Inserte el denominador"<<endl;
    cin>>denominadorTemp2;
    Racional r1{numeradorTemp,denominadorTemp};
    Racional r2{numeradorTemp2,denominadorTemp2};


    cout<<r1.toString()<<endl;
    cout<<r2.toString()<<endl;

    cout<<"Seleccione la operación a realizar"<<endl;

    cout<<"1. Suma"<<endl;

    cout<<"2. Multiplicacion"<<endl;

    cout<<"3. Division"<<endl;

    cout<<"4. Resta"<<endl;

    cout<<"5.Salir"<<endl;
    cin>> selector;


     if(selector==1)
        { Racional res=r1.suma(r2);
         cout<<res.toString()<<endl;

        }

     else if(selector==2)
        {Racional res=r1.multiplicacion(r2);
            cout<<res.toString()<<endl;

        }

     else if(selector==3)
        {Racional res=r1.division(r2);
            cout<<res.toString()<<endl;

        }

     else if(selector==4)
        {Racional res=r1.resta(r2);
            cout<<res.toString()<<endl;

        }

     else if (selector==5)
        {salir=1;

        }

    }

    while(salir==0);
    return 0;
}



