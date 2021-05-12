#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"
using namespace std;
using namespace funcoes;

int main() {
	//   int x = 5, y = 10, z = 30;
	//   float x = 5.5, y = 10.15, z = 30.7;
	char *x = "aaa";
	char *y = "bbb";
	char *z = "ccc";

	cout << "Antes: x = " << x << " y = " << y << endl;
	trocar(x, y);
	cout << "Depois : x = " << x << " y = " << y << endl;
	cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
	cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;

	try {
		Arranjo<int> arr(10);
		arr.set(4, 5);
		arr.set(7, 15);
		arr.set(8, 22);
		arr.exibir();

		Arranjo<float> arrf(5);
		arrf.set(4, 5.0);
		arrf.set(2, 15.2);
		arrf.set(20, 22.1); // índice excede tamanho do array, deve gerar exceção!!
		arrf.exibir();
	} catch (const out_of_range &e) {
		cout << e.what() << endl;
	}

	Arranjo<Aluno> turma(3);
	turma.set(0, Aluno("Joao", "1234"));
	turma.set(1, Aluno("Maria", "5235"));
	turma.set(2, Aluno("Jose", "2412"));
	turma.exibir();

	return 0;
}
