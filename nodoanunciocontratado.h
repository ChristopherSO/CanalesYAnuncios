/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoanunciocontratado.h
 * Author: Christopher
 *
 * Created on 29 de marzo de 2016, 9:13 p.m.
 */

#ifndef NODOANUNCIOCONTRATADO_H
#define NODOANUNCIOCONTRATADO_H
#include "nodoanuncio.h"

class NodoAnuncioContratado
{
private:
    string codigoAnuncio;
    NodoAnuncio * nodoAnuncio;
    NodoAnuncioContratado * siguiente;
public:
    NodoAnuncioContratado(); // Constructora
    NodoAnuncioContratado(NodoAnuncio*); // Constructora
    string getCodigoAnuncio();
    NodoAnuncio * getNodoAnuncio();
    NodoAnuncioContratado * getSiguiente();
    void setCodigoAnuncio(string);
    void setNodoAnuncio(NodoAnuncio *);
    void setSiguiente(NodoAnuncioContratado *);
};

#endif /* NODOANUNCIOCONTRATADO_H */

