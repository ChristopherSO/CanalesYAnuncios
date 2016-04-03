/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
#include "canal.h"
#include "listaanuncios.h"
using namespace std;

Canal::Canal(string pcodigo, string pnombre, int ptelefono, int pmontoMinimo,
        int ptiempoMinimo, int ptiempoMaximo, int pcostoPorMinuto) {

    codigo = pcodigo;
    nombre = pnombre;
    telefono = ptelefono;
    montoMinimo = pmontoMinimo;
    tiempoMinimo = ptiempoMinimo;
    tiempoMaximo = ptiempoMaximo;
    costoPorMinuto = pcostoPorMinuto;
    anunciosContratados = new ListaAnunciosContratados();

}

void Canal::setCodigo(string pcodigo) {
    codigo = pcodigo;
}

void Canal::setNombre(string pnombre) {
    nombre = pnombre;
}

void Canal::setTelefono(int ptelefono) {
    telefono = ptelefono;
}

void Canal::setMontoMinimo(int pmontoMinimo) {
    montoMinimo = pmontoMinimo;
}

void Canal::setTiempoMinimo(int ptiempoMinimo) {
    tiempoMinimo = ptiempoMinimo;
}

void Canal::setTiempoMaximo(int ptiempoMaximo) {
    tiempoMaximo = ptiempoMaximo;
}

void Canal::setCostoPorMinuto(int pcostoPorMinuto) {
    costoPorMinuto = pcostoPorMinuto;
}

void Canal::setAnunciosContratados(Anuncio * panuncio) {
    
    NodoAnuncio * nuevoNodoAnuncio; 
    nuevoNodoAnuncio->setAnuncio(panuncio);
    
    NodoAnuncioContratado * nuevoAun;
    nuevoAun->setNodoAnuncio(nuevoNodoAnuncio);
    
    anunciosContratados->insertarAlInicio(nuevoAun);
    
}

string Canal::getCodigo() {
    return codigo;
}

string Canal::getNombre() {
    return nombre;
}

int Canal::getTelefono() {
    return telefono;
}

int Canal::getMontoMinimo() {
    return montoMinimo;
}

int Canal::getTiempoMinimo() {
    return tiempoMinimo;
}

int Canal::getTiempoMaximo() {
    return tiempoMaximo;
}

int Canal::getCostoPorMinuto() {
    return costoPorMinuto;
}

ListaAnunciosContratados * Canal::getAnunciosContratados() {
    return anunciosContratados;
}

void Canal::ActualizaCobros() {



    if (anunciosContratados->getCabeza()!= NULL) {

        NodoAnuncioContratado * aux = this->anunciosContratados->getCabeza();

        while (aux != NULL) {

            /*
             * Si un anuncio tiene menos tiempo en transmisión se le cobrará el
            Monto mínimo a Cobrar por el canal
             */
            if (aux->getNodoAnuncio()->getAnuncio()->getTiempoDuracion() < tiempoMinimo) {
                int submonto = this->anunciosContratados->getCostoTotalPorCobrar() + montoMinimo;
                this->anunciosContratados->setCostoTotalPorCobrar(submonto);
            }
            
            /*
             Si un anuncio tiene mayor tiempo al máximo a trasmitir, se le 
             * cobrará el doble del Costo por minuto al doble, solo a los minutos extras.
             */
            if (aux->getNodoAnuncio()->getAnuncio()->getTiempoDuracion() > tiempoMaximo) {
                
            }
            
             aux = aux->getSiguiente();


        }
    }


}

