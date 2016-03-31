/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodocanal.h
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 8:40 p.m.
 */

#ifndef NODOCANAL_H
#define NODOCANAL_H

#include "canal.h"

class NodoCanal
{
private:
    Canal * canal;
    NodoCanal * anterior;
    NodoCanal * siguiente;
public:
    NodoCanal(); // Constructora
    NodoCanal(Canal *); // Constructora
    Canal * getCanal();
    NodoCanal * getAnterior();
    NodoCanal * getSiguiente();
    void setCanal(Canal *);
    void setAnterior(NodoCanal *);
    void setSiguiente(NodoCanal *);
};

#endif /* NODOCANAL_H */

