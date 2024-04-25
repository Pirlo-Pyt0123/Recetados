#include "pch.h"

#include "recetando.h"

recetando::Class1::Class1()
{

	nombre = "";
	identificador = "";
	grasas = 0;
	origen = "";
	ingredientes = "";
	categoria = "";
	nivel_dificultad = "";
	tiempo_preparacion = 0;
	tiempo_coccion = 0;
	ValorNutricional = "";



}

recetando::Class1::Class1(int _calorias, String^ _identificador, String^ _nombre, String^ _ingredientes, int _grasas, String^ _nivel_dificultad, String^ _origen, int _carbohidratos, String^ _fecha_ingreso, String^ _categoria, String^ _ValorNutricional, int _tiempo_preparacion, int _tiempo_coccion, int porciones_)
{
	nombre = _nombre;
	identificador = _identificador;
	grasas = _grasas;
	origen = _origen;
	ingredientes = _ingredientes;
	categoria = _categoria;
	nivel_dificultad = _nivel_dificultad;
	tiempo_preparacion = _tiempo_preparacion;
	tiempo_coccion = _tiempo_coccion;
	ValorNutricional = _ValorNutricional;
}

recetando::Class1::~Class1()
{

}

void recetando::Class1::guardar()
{
	
}
