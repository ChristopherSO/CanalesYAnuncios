/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "nodoanuncio.h"
using namespace std;

NodoAnuncio::NodoAnuncio() {
    anuncio = NULL;
    siguiente = NULL;
}

NodoAnuncio::NodoAnuncio(Anuncio * panuncio) {
    anuncio = panuncio;
    siguiente = NULL;
}

Anuncio* NodoAnuncio::getAnuncio() {
    return anuncio;

}

NodoAnuncio* NodoAnuncio::getSiguiente() {
    return siguiente;
}

void NodoAnuncio::setAnuncio(Anuncio* panuncio) {
    anuncio = panuncio;
}

void NodoAnuncio::setSiguiente(NodoAnuncio* panuncio) {
    siguiente = panuncio;

}



