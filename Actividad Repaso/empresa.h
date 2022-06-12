#ifndef EMPRESA_H_
#define EMPRESA_H_

#include <iostream>
#include <string>
#include <vector>
#include "empleado.h"
#include "asalariado.h"
#include "porhora.h"
#include "practicante.h"
using namespace std;

class Empresa {
private:
    vector <Empleado *> empleados;
public:
    void agrega_asalariado(string nombre, double salario_mensual) {
        empleados.push_back(new Asalariado{nombre, "Asalariado", salario_mensual});
    }

    void agrega_por_hora(string nombre, double horas, double pago_por_hora) {
        empleados.push_back(new PorHora{nombre, "Por hora", horas, pago_por_hora});
    }

    void agrega_practicante(string nombre, double horas, double pago_por_hora, int maximo) {
        empleados.push_back(new Practicante{nombre, "Practicante", horas, pago_por_hora, maximo});
    }

    double pago_empleados() {
        double total = 0;
        for (Empleado *ptr : empleados) {
            total += ptr->pago_mensual();
        }
        return total;
    }

    double pago_empleados(string tipo_empleado) {
        double total = 0;
        for (Empleado *ptr : empleados) {
            if (ptr->getTipo_empleado() == tipo_empleado)
                total += ptr->pago_mensual();
        }
        return total;
    }

    void imprime_empleados() {
        for (Empleado *ptr : empleados) {
            cout << *ptr << endl;
        }
    }

};

#endif