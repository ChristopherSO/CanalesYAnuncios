/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaanuncios.h
 * Author: Christopher
 *
 * Created on 29 de marzo de 2016, 8:32 p.m.
 */

#ifndef LISTAANUNCIOS_H
#define LISTAANUNCIOS_H

#include "nodoanuncio.h"

class ListaAnuncios
{
private:
    int longitud;
    NodoAnuncio * cabeza;
public:
    ListaAnuncios(); // Constructora
    int getLongitud();
    NodoAnuncio * getCabeza();
    void setCabeza(NodoAnuncio *);
    void insertarAlInicio(NodoAnuncio *);
    bool estaVacia();
    void mostrarLista();
    Anuncio * getAnuncioPorCodigo(string);
};

#endif /* LISTAANUNCIOS_H */

