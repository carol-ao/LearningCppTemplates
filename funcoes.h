#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#include <string.h>

namespace funcoes {
/*
 void trocar(int & a, int & b) {
 int temp;
 temp = a;
 a=b;
 b=temp;

 }
 int maximo(const int a, const int b) {
 return a>b? a:b;

 }
 int minimo(const int a, const int b) {
 return a<b? a:b;
 }
 */
template<class T>
void trocar(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<class T>
T maximo(T a, T b) {
	return a > b ? a : b;

}

template<class T>
T minimo(T a, T b) {
	return a < b ? a : b;
}

template<>
char* maximo<char*>(char *str1, char *str2) {

	return strcmp(str1, str2) > 0 ? str1 : str2;
}

}
#endif // FUNCOES_H_INCLUDED
