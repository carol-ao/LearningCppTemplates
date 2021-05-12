#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

#include <iostream>
using namespace std;

class Aluno {

private:
	string nome;
	string mat;

public:
	Aluno() {
	}

	Aluno(const char *nome, const char *mat) :
			nome(nome), mat(mat) {
	}

	friend class Arranjo<Aluno> ;

	friend ostream& operator <<(ostream &out, const Aluno &aluno);

	Aluno& operator=(const Aluno &aluno) {
		nome = aluno.nome;
		mat = aluno.mat;
		return *this;
	}

};

ostream& operator<<(ostream &out, const Aluno &aluno) {
	out << "nome: " << aluno.nome << ", matricula: " << aluno.mat;
	return out;
}

template<>
void Arranjo<Aluno>::set(int idx, const Aluno &aluno) {
// atribua nome e mat individualmente para o item do array

//    itens[idx].nome = aluno.nome;
//    itens[idx].mat = aluno.mat;

	itens[idx] = aluno;
}

template<>
void Arranjo<Aluno>::exibir() {
// exiba cada aluno do array no formato "idx : mat = nome"

	int tam = this->getTamanho();
	for (int i = 0; i < tam; i++) {
		cout << "idx :";
		cout << i;
		cout << " mat: ";
		cout << this->itens[i].mat;
		cout << " nome: ";
		cout << this->itens[i].nome << endl;
	}

//			for(int i=0;i<this->tamanho;++i){
//			 cout<<this->itens[i]<<endl;
//			}

}

#endif // ALUNO_H_INCLUDED
