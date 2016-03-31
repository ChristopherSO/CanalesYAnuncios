/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   anuncioscontratados.h
 * Author: Christopher
 *
 * Created on 29 de marzo de 2016, 9:03 p.m.
 */

#ifndef ANUNCIOSCONTRATADOS_H
#define ANUNCIOSCONTRATADOS_H

#include "nodoanunciocontratado.h"

class AnunciosContratados
{
private:
	int lingitud;
        int costoTotalPorCobrar;
	NodoAnuncioContratado * cabeza;
public:
	ListaAnuncios(); // Constructora
	int getLongitud();
        NodoAnuncioContratado * getCabeza();
	void setCabeza(NodoAnuncioContratado *);
        void insertarAlInicio(int);
	bool estaVacia();
	void mostrarLista();
};

#endif /* ANUNCIOSCONTRATADOS_H */

