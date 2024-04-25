#pragma once

using namespace System;

namespace recetando {
	public ref class Class1
	{
		// TODO: Agregue aquí los métodos de esta clase.
	private:
		property int calorias;
		property int grasas;
		property int proteinas;
		property int carbohidratos;
		property String^ identificador;
		property String^ nombre;
		property String^ ingredientes;
		property int tiempo_preparacion;
		property int tiempo_coccion;
		property int porciones;
		property String^ nivel_dificultad;
		property String^ categoria;
		property String^ origen;
		property String^ ValorNutricional;
	public:
		Class1();
		Class1(int _calorias, String^ _identificador, String^ _nombre, String^ _ingredientes, int _grasas, String^ _nivel_dificultad, String^ _origen, int _carbohidratos, String^ _fecha_ingreso, String^ _categoria, String^ _ValorNutricional, int _tiempo_preparacion,int _tiempo_coccion, int porciones_);

		~Class1();

		int Getcalorias() { return calorias; }
		String^ getnombre() { return nombre; }
		String^ getidentificador() { return identificador; }
		int getgrasas() { return grasas; }
		String^ getingredientes() { return ingredientes; }
		int getcarbohidratos() { return carbohidratos; }
		String^ getnivel_dificultad() { return nivel_dificultad; }
		String^ getValorNutricional() { return ValorNutricional; }
		String^ getcategoria() { return categoria; }
		int GettiempoPreparacion() { return tiempo_preparacion; }
		int GettiempoCoccion() { return tiempo_coccion; }
		int GetPorciones() { return porciones; }


		void setnombre(String^ _nombre) { nombre = _nombre; }
		void setcalorias(int _calorias) { calorias = _calorias; }
		void setidentificador(String^ _identificador) { identificador = _identificador; }
		void setnivel_dificultad(String^ _nivel_dificultad) { nivel_dificultad = _nivel_dificultad; }
		void setValorNutricional(String^ _ValorNutricional) { ValorNutricional = _ValorNutricional; }
		void setcategoria(String^ _categoria) { categoria = _categoria; }
		void setcarbohidratos(int _carbohidratos) { carbohidratos = _carbohidratos; }
		void setgrasas(int _grasas) { grasas = _grasas; }
		void setiempoPreparacion(int _tiempo_preparacion) { tiempo_preparacion = _tiempo_preparacion; }
		void settiempoCoccion(int _tiempo_coccion) { grasas = _tiempo_coccion; }
		void settingredientes(String^ _ingredientes) { ingredientes = _ingredientes; }
		//void setcarbohidratos(int _carbohidratos) { carbohidratos = _carbohidratos; }

		void guardar();

		
	
		
	};
}
