#ifndef ARRANJO_H_INCLUDED
#define ARRANJO_H_INCLUDED
#include <iostream>
#include <exception>
using namespace std;

template<class T>
class Arranjo {

private:
	int tamanho; // tamanho do arranjo
	T *itens; //items do arranjo

public:
	Arranjo(int tam) {
		tamanho = tam;
		itens = new T[tam]();
	}

	virtual ~Arranjo() {
		delete[] itens;
	}

	int getTamanho() {
		return tamanho;
	}

	virtual T get(int idx) {
		if (idx >= tamanho || idx < 0) {
			throw out_of_range("excecao: indice invalido.");
		}
		return itens[idx];
	}

	virtual void set(int idx, const T &item) {
		if (idx >= tamanho || idx < 0) {
			throw out_of_range("excecao: indice invalido.");
		}
		itens[idx] = item;
	}

	virtual void exibir();
};

template<class T>
void Arranjo<T>::exibir() {

	int tam = this->getTamanho();
	for (int i = 0; i < tam; i++) {
		cout << "<idx>:";
		cout << i;
		cout << " <item>:";
		cout << this->get(i) << endl;
	}
}

#endif // ARRANJO_H_INCLUDED
