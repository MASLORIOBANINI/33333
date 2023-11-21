#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int height;
	cout << "введите высоту треугольника и трапеции ";
	cin >> height;
	cout << " равнобедренный треугольник " << endl;
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < height - i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; ++j) {
			cout << "*";
		}
		cout << endl;

	}
	cout << "равнобедренная трапеция" << endl;
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < height - i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 3; ++j) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}