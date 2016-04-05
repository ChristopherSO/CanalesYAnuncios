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
#include "listaanuncios.h" 

class ListaCanales
{
private:
    int longitud;
    NodoCanal * cabeza;
    NodoCanal * cola;
public:
    ListaCanales(); // Constructora
    int getLongitud();
    NodoCanal * getCabeza();
    NodoCanal * getCola();
    void setCabeza(NodoCanal *);
    void setCola(NodoCanal *);
    void insertarAlInicio(NodoCanal *);
    void insertarAlFinal(NodoCanal *);
    bool estaVacia();
    void mostrarLista();
    Canal * getCanalPorCodigo(string);
    void IncluirAnuncio(string, ListaAnuncios *, string);
};

#endif /* LISTACANALES_H */

