#include "Racional.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


Racional::Racional(): Racional(0,1)
{
  //  cout<<"Constructor de un objeto racional"<<endl;
    //ctor
}

Racional::Racional(int numerador, int denominador)
{
  //  cout<<"Constructor con argumentos de objeto racional"<<endl;
    this->numerador = denominador <0 ? -numerador : numerador;
    this->denominador = denominador <0 ? -denominador :denominador;
    reducir();

}


Racional::~Racional()
{
   // cout<<"Destruyendo "<<toString()<<endl;
}

Racional Racional::suma(Racional otro)
{
    Racional resultado;
    resultado.numerador =otro.numerador*denominador+otro.denominador*numerador;
    resultado.denominador=otro.denominador* denominador;
    if(resultado.getDenominador() !=0)
    {
        resultado.reducir();

    }
    return resultado;

}
Racional Racional :: multiplicacion(Racional otro)
{
    Racional resultado;
    resultado.numerador =otro.numerador*numerador;
    resultado.denominador=otro.denominador* denominador;
    if(resultado.getDenominador() !=0)
    {
        resultado.reducir();

    }
    return resultado;

}

Racional Racional :: division(Racional otro)
{
    Racional resultado;
    resultado.numerador =otro.denominador*numerador;
    resultado.denominador=otro.numerador* denominador;
    if(resultado.getDenominador() !=0)
    {
        resultado.reducir();

    }
    return resultado;

}

Racional Racional::resta(Racional otro)
{
    Racional resultado;
    resultado.numerador =otro.numerador*denominador-otro.denominador*numerador;
    resultado.denominador=otro.denominador* denominador;
    if(resultado.getDenominador() !=0)
    {
        resultado.reducir();

    }
    return resultado;

}

string Racional:: toString()
{
    ostringstream salida;
    if(denominador==0)

        salida <<endl<<"Error divisor es 0!!!"<<endl;



    else if (numerador ==0)

       salida<<"0";

    else

        salida <<numerador<<"/"<<denominador;


    return salida.str();
}
float Racional::toDecimal()
{
    if(denominador==0)
    {
        cout<<endl<<"Divide by zero error!!!"<<endl;
        return 0;
    }
    else
    {
        return float(numerador)/float(denominador);
    }

}



void Racional :: reducir()
{
    int n = numerador < 0 ?  -numerador : numerador;
    int d{denominador};
    int mayor = n>d?n:d;
    int mcd{0};// Maximo comun denominador
    for(int ciclo{mayor};ciclo>=2;ciclo--)
    {
        if(numerador%ciclo==0&&denominador%ciclo==0)
        {
            mcd=ciclo;
            break;
        }
    }

    if(mcd!=0)
    {
       numerador/=mcd;
        denominador/=mcd;
    }

}
