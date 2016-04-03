/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "nodoanuncio.h"
#include "nodoanunciocontratado.h"
using namespace std;

NodoAnuncioContratado::NodoAnuncioContratado() {

}

NodoAnuncioContratado::NodoAnuncioContratado(NodoAnuncio* panuncio) {
    codigoAnuncio = panuncio->getAnuncio()->getCodigoAnuncio();
}

string NodoAnuncioContratado::getCodigoAnuncio() {
    return codigoAnuncio;
}

NodoAnuncio* NodoAnuncioContratado::getNodoAnuncio() {
    return nodoAnuncio;
}

NodoAnuncioContratado* NodoAnuncioContratado::getSiguiente() {
    return siguiente;
}

void NodoAnuncioContratado::setCodigoAnuncio(string pcodigo) {
    codigoAnuncio = pcodigo;
}

void NodoAnuncioContratado::setNodoAnuncio(NodoAnuncio* panuncio) {
    nodoAnuncio = panuncio;
}

void NodoAnuncioContratado::setSiguiente(NodoAnuncioContratado* panuncio) {
    siguiente = siguiente;
}
