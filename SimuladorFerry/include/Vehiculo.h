#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string.h>

using namespace std;


class Vehiculo
{
    public:
        // contructores
        Vehiculo();
        Vehiculo(string matricula, string marca, string modelo, string color, string entrada, int tiempoEspera);
        virtual ~Vehiculo();
        // printer
        void write();
        // geters and setters
        string getMatricula();
        void setMatricula(string matricula);
        string getMarca();
        void setMarca(string marca);
        string getModelo();
        void setModelo(string modelo);
        string getColor();
        void setColor(string color);
        string getEntrada();
        void setEntrada(string entrada);
        int getTiempoEspera();
        void setTiempoEspera(int tiempoEspera);
        // others
        int addTiempoEspera(int tiempoEspera);
        bool equals(Vehiculo v);


    protected:

    private:
        string matricula;
        string marca;
        string modelo;
        string color;
        string entrada;
        int tiempoEspera;
        void randomMarca();
        void randomModelo();
        void randomMatricula();
        void randomColor();
};

typedef Vehiculo *pVehiculo;

pVehiculo randomVehiculo();
void test_Vehiculo();

#endif // VEHICULO_H
