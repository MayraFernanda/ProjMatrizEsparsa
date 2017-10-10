#include "stdafx.h"
#include "Lista.h"


Lista::Lista()
{
}

void Lista::incluir(No * no)
{
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	/*---------------- DEVE ESTAR TD ERRADO ----------------*/
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo
	// se o atual é nulo

	if (!existe(no)){
		if (this->atual != nullptr) { // se o atual não é nulo
			if (this->atual->getValor > no->getValor() && this->atual->getAnte()->getValor() < no->getValor()) { // se o atual é > que o no e o anterior do atual é < que o no => no deverá entrar no meio deles
				no->setAnte(this->atual->getAnte()); // o anterior do no se torna o anterior do atual

				if (this->atual->getAnte() != nullptr) {
					this->atual->getAnte()->setProx(no); // o próximo do anterior do atual se torna o no
				}
				
				no->setProx(this->atual); // o próximo do no se torna o atual
				this->atual->setAnte(no); // o anterior do atual se torna o no
			}
		}
		else if (this->estaVazia()){ // se o atual é nulo
			primeiro = no;
			ultimo = no;
		}
		else {

		}
			
	}
}


bool Lista::estaVazia()
{
	if (this->primeiro == nullptr)
		return true;
	return false;
}

bool Lista::existe(No* no)
{
	if (estaVazia())
		return false;
	else {
		while (this->atual->getValor() < no->getValor())
			this->atual = this->atual->getProx();

		if (this->atual->getValor() == no->getValor())
			return true;
	}

	return false;
}

Lista::~Lista()
{
}
