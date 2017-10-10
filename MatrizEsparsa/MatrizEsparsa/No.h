#pragma once
class No
{
public:
	No(int linha, int coluna, int valor, No *prox);
	No();
	~No();

	//getters
	int getLinha();
	int getColuna();
	int getValor();
	No* getProx();
	No* getAnte();

	//setters
	void setLinha(int);
	void setColuna(int);
	void setValor(int);
	void setProx(No*);
	void setAnte(No*);

private:
	int linha;
	int coluna;
	int valor;
	No* prox;
	
};

