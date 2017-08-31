/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matriz.cpp
 * Author: u14189
 * 
 * Created on 31 de Agosto de 2017, 07:49
 */

#include "Matriz.h"
#include "Linha.h"
#include "Lista.h"

Matriz::Matriz() {
}

Matriz::Matriz(const Matriz& orig) {
}

Matriz::~Matriz() {
}
    Linha linha = new Linha();
    Lista lista; // Lista com que aponta para as linhas da matriz
    
    operator = (int param){        
        adicionar(param);    
    }
    
    Linha operator [] (int linhas){        
        return lista[linhas];
    }
    
    void adicionar(int linha, int col, int value){
        for(int i=0; i<linha; i++){
           //fazer for e percorrer a lista para 
        }
    }
    

}

