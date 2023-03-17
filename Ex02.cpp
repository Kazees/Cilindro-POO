#include <iostream>
#include <iomanip>
#include "Cilindro.h"
#include "Cilindro.cpp"

using namespace std;

int main()
{
    float raio,altura;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite o valor do raio: ";
        cin>>raio;

        cout<<"Digite o valor da altura: ";
        cin>>altura;

        try
        {
            Cilindro n1(raio,altura);
            cout<<fixed<<setprecision(2);
            cout<<endl<<"Area lateral: "<<n1.calcularArealateral()<<endl;
            cout<<"Area: "<<n1.calcularArea()<<endl;
            cout<<"Volume: "<<n1.calcularVolume()<<endl;
            conti=false;
        }

        catch(invalid_argument &ex)
        {
            cout<<"Erro: "<<ex.what()<<endl;
            conti=true;
        }
    }

    return 0;
}