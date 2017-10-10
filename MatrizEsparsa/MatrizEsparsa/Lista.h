#pragma once
#include "No.h"

class Lista
{

public:
	Lista();
	void incluir(No*);
	void excluir(No*);
	void visualizar();
	bool estaVazia();
	bool existe(No*);
	~Lista();

private:
	No* primeiro;
	No* atual;
	No* ultimo;
};

