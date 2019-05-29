#include <iostream>


using namespace std;

void promedio(int *n,float &promedio) {
	
	int suma;
	int num;
	n = new int[6];
	int mini= 20;
	
	for (int i = 0; i < 6; i++) {
		cout << "Ingrese nota n°" << i + 1 << ": " << endl;
		cin >> num;
		n[i] = num;
		if (n[i] <= mini) mini = n[i];
	}
	
	for (int i = 0; i < 6; i++) {
		suma += n[i];
	}
	suma -= mini;
	promedio = suma / float(6);
	for (int i = 0; i < 6; i++) {
		cout << "Nota " << i + 1 << "es: " << n[i] << endl;
	}
	cout << "la nota menor fue: " << mini << endl;
	
	delete n;
}

void main() {


	int *n = new int;
	float promedioFinal;
	promedio(n, promedioFinal);
	cout << "El promedio es: " << promedioFinal << endl;
	system("pause");
}
