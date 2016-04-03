/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoanuncio.h
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 9:07 p.m.
 */

#ifndef NODOANUNCIO_H
#define NODOANUNCIO_H

#include "anuncio.h"

class NodoAnuncio
{
private:
    Anuncio * anuncio;
    NodoAnuncio * siguiente;
public:
    NodoAnuncio(Anuncio *); // Constructora
    Anuncio * getAnuncio();
    NodoAnuncio * getSiguiente();
    void setAnuncio(Anuncio *);
    void setSiguiente(NodoAnuncio *);
};

#endif /* NODOANUNCIO_H */

