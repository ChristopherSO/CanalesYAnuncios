/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   canal.h
 * Author: Christopher
 *
 * Created on 28 de marzo de 2016, 7:34 p.m.
 */

#ifndef CANAL_H
#define CANAL_H

#include "listaanuncioscontratados.h"

using namespace std;

class Canal {
private:
    string codigo;
    string nombre;
    int telefono;
    int montoMinimo;
    int tiempoMinimo;
    int tiempoMaximo;
    int costoPorMinuto;
    ListaAnunciosContratados * anunciosContratados;
public:
    Canal(); // Constructora
    Canal(string, string, int, int, int, int, int); // Constructora
    void setCodigo(string);
    void setNombre(string);
    void setTelefono(int);
    void setMontoMinimo(int);
    void setTiempoMinimo(int);
    void setTiempoMaximo(int);
    void setAnunciosContratados(Anuncio *);
    void setCostoPorMinuto(int);
    string getCodigo();
    string getNombre();
    int getTelefono();
    int getMontoMinimo();
    int getTiempoMinimo();
    int getTiempoMaximo();
    int getCostoPorMinuto();
    ListaAnunciosContratados * getAnunciosContratados();
    void ActualizaCobros();
};

#endif // LISTAENTEROS_H