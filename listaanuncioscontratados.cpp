/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
#include "listaanuncioscontratados.h"
using namespace std;

ListaAnunciosContratados::ListaAnunciosContratados() {
    this->longitud = 0;
    this->cabeza = NULL;
    this->costoTotalPorCobrar = 0;
}

void ListaAnunciosContratados::setCabeza(NodoAnuncioContratado* panunciocontrado) {

    costoTotalPorCobrar = 0;
}

void ListaAnunciosContratados::setCostoTotalPorCobrar(double pmonto) {
    costoTotalPorCobrar = pmonto;
}

int ListaAnunciosContratados::getLongitud() {
    return longitud;
}

double ListaAnunciosContratados::getCostoTotalPorCobrar() {
    return costoTotalPorCobrar;
}

NodoAnuncioContratado* ListaAnunciosContratados::getCabeza() {
    return cabeza;
}

void ListaAnunciosContratados::insertarAlInicio(NodoAnuncioContratado * panuncio) {

    if (panuncio == NULL) {

    } else {
        if (this->cabeza == NULL) {
            this->cabeza = panuncio;
        } else {
            panuncio->setSiguiente(this->cabeza);
            this->cabeza = panuncio;
        }
        this->longitud++;
    }
}

bool ListaAnunciosContratados::estaVacia() {
    return true;
}

void ListaAnunciosContratados::mostrarLista() {

    NodoAnuncioContratado * aux;

    if (this->cabeza != NULL) {

        aux = this->cabeza;

        while (aux != NULL) {
            cout << "Nombre Empresa: " << aux->getNodoAnuncio()->getAnuncio()->getNombreEmpresa() << endl
                    << "Código Empresa: " << aux->getNodoAnuncio()->getAnuncio()->getCodigoEmpresa() << endl
                    << "Código Anuncio: " << aux->getNodoAnuncio()->getAnuncio()->getCodigoAnuncio() << endl
                    << "Monto a pagar: " << aux->getCosto() << endl
                    << "--------------------------------------------" << endl;
            aux = aux->getSiguiente();
        }
        cout << "Costo total por cobrar: " << this->getCostoTotalPorCobrar() << endl;
    }
}

