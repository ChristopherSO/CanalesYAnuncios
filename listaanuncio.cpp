/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
#include "listaanuncios.h"
using namespace std;

ListaAnuncios::ListaAnuncios() {
}

int ListaAnuncios::getLongitud() {
    return longitud;
}

NodoAnuncio* ListaAnuncios::getCabeza() {
    return cabeza;
}

void ListaAnuncios::setCabeza(NodoAnuncio* panuncio) {
    cabeza = panuncio;
}

void ListaAnuncios::insertarAlInicio(NodoAnuncio* panuncio) {

    if (panuncio == NULL) {

    } else {
        if (this->cabeza == NULL) {
            cabeza = panuncio;
        } else {
            panuncio->setSiguiente(this->cabeza);
            this->cabeza = panuncio;
        }
        this->longitud++;

    }

}

bool estaVacia() {

    return true;
}

void ListaAnuncios::mostrarLista() {

    NodoAnuncio * aux;

    if (this->cabeza != NULL) {

        aux = this->cabeza;

        while (aux != NULL) {
            cout << "Nombre Empresa: " << aux->getAnuncio()->getNombreEmpresa() << endl
                    << "Código Empresa: " << aux->getAnuncio()->getCodigoEmpresa() << endl
                    << "Código Anuncio: " << aux->getAnuncio()->getCodigoAnuncio() << endl
                    << "Tiempo Duración: " << aux->getAnuncio()->getTiempoDuracion() << endl
                    << "--------------------------------------------" << endl;
            aux = aux->getSiguiente();

        }
    }

}
