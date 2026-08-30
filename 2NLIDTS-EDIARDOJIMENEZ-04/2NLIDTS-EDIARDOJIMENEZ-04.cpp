#include <iostream>
#include<cstdio>

using namespace std;
// constantes globales 
const int maxfilas = 3;
const int maxcolumnas = 3;

void inpresion(int arr[maxfilas][maxcolumnas]) {
	printf(" los valores de la matriz son: \n");
	for (int i = 0; i < maxfilas;+i++) {
		for (int j = 0; j < maxcolumnas; j++) {
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}
}
void captura_arreglo(int arr[maxfilas][maxcolumnas]) {
	for (int i = 0; i < maxfilas; i++) {
		for (int j = 0; j < maxcolumnas; j++) {
			printf("ingrese el valor para la posicion [%d]%d]:\n", i + 1, j + 1);
			cin >> arr[i][j];
		}
	}
}
int main() {
	int arreglo_final[maxfilas][maxcolumnas];
	cout << " captura de valores a una matriz NxM\n\n";
	printf(" arreglo bidimencional\n");

	captura_arreglo(arreglo_final);
	inpresion(arreglo_final);

	return 0;
}