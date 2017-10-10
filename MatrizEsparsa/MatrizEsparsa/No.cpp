#include "stdafx.h"
#include "No.h"


No::No()
{
}

No::No(int linha, int coluna, int valor, No *prox)
{
	setLinha(linha);
	setColuna(coluna);
	setValor(valor);
	setProx(prox);
}

No::~No()
{
	//Implementar destrutor
}

int No::getValor()
{
	return valor;
}

int No::getLinha()
{
	return linha;
}

int No::getColuna()
{
	return coluna;
}

No * No::getProx()
{
	return this->prox;
}

void No::setLinha(int linha)
{
	this->linha = linha;
}

void No::setColuna(int coluna)
{
	this->coluna = coluna;
}

void No::setValor(int valor)
{
	this->valor = valor;
}

void No::setProx(No * prox)
{
	this->prox = prox;
}

