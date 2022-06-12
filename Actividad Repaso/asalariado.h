#ifndef ASALARIADO_H_
#define ASALARIADO_H_

#include <iostream>
#include <string>
#include "empleado.h"
using namespace std;

class Asalariado: public Empleado {
private:
    double salario_mensual;
public:
    Asalariado(string nombre, string tipo_empleado, double salario_mensual):
        Empleado{nombre, tipo_empleado}, salario_mensual{salario_mensual} {}
    virtual double pago_mensual(){
        return salario_mensual;
    }
};

#endif