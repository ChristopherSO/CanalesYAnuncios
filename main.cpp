/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 7:28 p.m.
 */

#include <cstdlib>
#include <iostream>
#include "anuncio.h"
#include "canal.h"
#include "listaanuncios.h"
#include "listacanales.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ListaAnuncios *miListaAnuncios = new ListaAnuncios();
    ListaCanales *miListaCanales = new ListaCanales();

    Canal * canal1 = new Canal("C1", "Canal 1", 1234, 100, 2, 5, 25);
    Canal * canal2 = new Canal("C2", "Canal 2", 1234, 120, 1, 5, 15);
    Canal * canal3 = new Canal("C3", "Canal 3", 1234, 125, 1, 5, 35);
    Canal * canal4 = new Canal("C4", "Canal 4", 1234, 140, 1, 5, 125);
    Canal * canal5 = new Canal("C5", "Canal 5", 1234, 140, 1, 5, 125);

    Anuncio * a1 = new Anuncio("E1", "Empresa 1", "A1", 1);
    Anuncio * a2 = new Anuncio("E2", "Empresa 2", "A2", 5);
    Anuncio * a3 = new Anuncio("E3", "Empresa 3", "A3", 0.5);
    Anuncio * a4 = new Anuncio("E4", "Empresa 4", "A4", 10);
    
    // Se crean los nodos para los anuncios anteriores que se necesitaran
    // mas de una vez
    NodoAnuncio * na1 = new NodoAnuncio(a1);
    NodoAnuncio * na2 = new NodoAnuncio(a2);
    NodoAnuncio * na3 = new NodoAnuncio(a3);
    NodoAnuncio * na4 = new NodoAnuncio(a4);
    
    // Se ingresan todos los anuncios a la lista de anuncios
    miListaAnuncios->insertarAlInicio(na4);
    miListaAnuncios->insertarAlInicio(na3);
    miListaAnuncios->insertarAlInicio(na2);
    miListaAnuncios->insertarAlInicio(na1);
    //miListaAnuncios->mostrarLista();

    //    Se hacen pruebas para insertar al principio y al final con distintos 
    //    canales.
    miListaCanales->insertarAlFinal(new NodoCanal(canal3));
    miListaCanales->insertarAlFinal(new NodoCanal(canal4));
    miListaCanales->insertarAlInicio(new NodoCanal(canal2));
    miListaCanales->insertarAlInicio(new NodoCanal(canal1));
    miListaCanales->insertarAlFinal(new NodoCanal(canal5));
//    miListaCanales->mostrarLista();

    // Se agregan anuncios a la lista de anuncios contratados de un canal
//    canal1->setAnunciosContratados(a1);
//    canal1->setAnunciosContratados(a2);
//    canal1->getAnunciosContratados()->mostrarLista();
    canal1->insertarAnuncioContratadoAlInicio(na4);
    canal1->insertarAnuncioContratadoAlInicio(na2);
    canal1->getAnunciosContratados()->mostrarLista();
    
    
    cout<< "*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*!*" << endl;
    canal1->ActualizaCobros();
    canal1->ImprimeCanal();

//    miListaCanales->mostrarLista();
//    cout<< "*!*!*!*!*!*!*!*!*!*!*" << endl;
//    miListaAnuncios->mostrarLista();
    return 0;
}

