#pragma once
#include "Recursos.h"
#include "CUniversitario.h"
#include "CEmpleado.h"

class CBecado : public CUniversitario, public CEmpleado
{
public:
	CBecado(string _codigo, string _dni, double _sueldo) : CUniversitario(_codigo), CEmpleado(_dni, _sueldo) { }

	~CBecado(){ }

	void mostrar() {
		cout << "Becado de codigo universitario " << codigo <<", de DNI: " << dni << " y de suelo: " << sueldo << endl;
	}
};
