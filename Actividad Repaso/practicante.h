#ifndef PRACTICANTE_H_
#define PRACTICANTE_H_

#include <iostream>
#include <string>
#include "empleado.h"
using namespace std;

class Practicante: public Empleado {
private:
    double horas_trabajadas;
    double pago_por_hora;
    int maximo_horas;
public:
    Practicante(string nombre, string tipo_empleado, double horas_trabajadas, double pago_por_hora, int maximo_horas):
        Empleado{nombre, tipo_empleado}, horas_trabajadas{horas_trabajadas}, pago_por_hora{pago_por_hora}, maximo_horas{maximo_horas} {}
    virtual double pago_mensual() {
        return pago_por_hora * ((horas_trabajadas <= maximo_horas) ? horas_trabajadas : maximo_horas);
    }
};

#endif