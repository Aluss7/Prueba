#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double e = 2.7182;
	double pi = 3.141592;
	double resultado, x, y;

	cout << "Introduce el valor de la variable x: ";
	cin >> x;

	cout << "Introduce el valor de la variable y: ";
	cin >> y;

	resultado = sqrt(pow(1.531, (x + y)) + ((abs(pow(e, x) - pow(e, y))) * (sin(x) - tan(y))) / (log10(y) * pow(pi, x)));

	cout << "El resultado sería: " << resultado;

	return 0;
}