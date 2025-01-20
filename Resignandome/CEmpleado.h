#pragma once
#include "Recursos.h"

class CEmpleado {
protected:
	string dni;
	double sueldo;
public:
	CEmpleado(string _dni, double _sueldo): dni(_dni), sueldo(_sueldo) { }
	~CEmpleado() { }

};

