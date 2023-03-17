#include "Cilindro.h"

void Cilindro::setRaio(float raio)
{
    if(raio<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->raio=raio;
}

void Cilindro::setAltura(float altura)
{
    if(altura<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero.");
    }

    this->altura=altura;
}

Cilindro::Cilindro(float raio,float altura)
{
    setRaio(raio);
    setAltura(altura);
}