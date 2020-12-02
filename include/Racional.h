#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>
using namespace std;

class Racional
{
    private:
        int numerador;
        int denominador;
        void reducir();

    public:
        Racional();
        Racional(int, int);
        ~Racional();
    Racional suma(Racional);
    Racional multiplicacion(Racional);
    Racional division(Racional);
    Racional resta(Racional);

    std::string toString();
    float toDecimal();

    inline int getNumerador(){return numerador;}
    inline void setNumerador(int num){numerador=num;}
    inline int getDenominador(){return denominador;}
    inline int setDenominadot(int denom){denominador=denom;}




};

#endif // RACIONAL_H
