#ifndef CILINDRO_H
#define CILINDRO_H
#include <stdexcept>

using std::invalid_argument;

class Cilindro
{
    private:
        float raio;
        float altura;

    public:
        Cilindro(float raio,float altura);

        void setRaio(float raio);
        void setAltura(float altura);

        float getRaio()const {return raio;}
        float getAltura()const {return altura;}

        float calcularArealateral()const {return 2*3.1415*raio*altura;}
        float calcularArea()const {return 2*3.1415*raio*(altura+raio);}
        float calcularVolume()const {return 3.1415*raio*raio*altura;}
};


#endif