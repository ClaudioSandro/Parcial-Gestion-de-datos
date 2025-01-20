#pragma once
#include "Recursos.h"
#include "CBecado.h"

class GestorBecado 
{
private:
	vector <CUniversitario*> arrUniversitario;
	vector <CEmpleado*> arrEmpleado;
	vector <CBecado*> arrBecado;
public:
	GestorBecado(){}
	~GestorBecado(){}

	void agregarBecado(string _codigo, string _dni, double _sueldo);
	void mostrarBecado();
	void eliminarBecado(int _numborrar);
	void modificarBecado(int _nummodificar, string _codigomodificado, string _dnimodificado, double _sueldomodificado);

	
};

void GestorBecado::agregarBecado(string _codigo, string _dni, double _sueldo) {
	arrBecado.push_back(new CBecado(_codigo, _dni, _sueldo));
}
void GestorBecado::mostrarBecado(){
	for (int i = 0; i < arrBecado.size(); i++) {
		cout << i + 1 << ") ";
		arrBecado[i]->mostrar();
	}
}
void GestorBecado::eliminarBecado(int _numborrar){
	_numborrar = _numborrar - 1;
	arrBecado.erase(arrBecado.begin() + _numborrar);
}
void GestorBecado::modificarBecado(int _nummodificar, string _codigomodificado, string _dnimodificado, double _sueldomodificado){
	_nummodificar = _nummodificar - 1;
	arrBecado.erase(arrBecado.begin() + _nummodificar);
	arrBecado.insert(arrBecado.begin() + _nummodificar, new CBecado(_codigomodificado, _dnimodificado, _sueldomodificado));
}