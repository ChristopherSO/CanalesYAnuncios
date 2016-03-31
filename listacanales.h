/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listacanales.h
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 8:37 p.m.
 */

#ifndef LISTACANALES_H
#define LISTACANALES_H

#include "nodocanal.h"

class ListaCanales
{
private:
	int lingitud;
	NodoCanal * cabeza;
	NodoCanal * cola;
public:
	ListaCanales(); // Constructora
	int getLongitud();
        NodoCanal * getCabeza();
        NodoCanal * getCola();
	void setCabeza(NodoCanal *);
	void setCola(NodoCanal *);
        void insertarAlInicio(int);
	void insertarAlFinal(int);
	bool estaVacia();
	void mostrarLista();
};

#endif /* LISTACANALES_H */

