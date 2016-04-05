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

#ifndef LISTAANUNCIOSCONTRATADOS_H
#define LISTAANUNCIOSCONTRATADOS_H

#include "nodoanunciocontratado.h"

class ListaAnunciosContratados {
private:
    int longitud;
    double costoTotalPorCobrar;
    NodoAnuncioContratado * cabeza;
public:
    ListaAnunciosContratados(); // Constructora
    int getLongitud();
    double getCostoTotalPorCobrar();
    NodoAnuncioContratado * getCabeza();
    void insertarAlInicio(NodoAnuncioContratado *);
    bool estaVacia();
    void mostrarLista();
    void setCabeza(NodoAnuncioContratado *);
    void setCostoTotalPorCobrar(double);
    bool elAnuncioYaExiste(string);
};

#endif /* LISTAANUNCIOSCONTRATADOS_H */

