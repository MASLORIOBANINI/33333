
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(0, "");
	vector<int> numbers = { 12, -20, 43, -40, 56, 64, -71, };
	cout << "положительные числа";
	for (int number : numbers) {
		if (number > 0) {
			cout << number << " ";
		}
	}
	cout << endl;
	cout << " отрицательные числа";
	for (int number : numbers) {
		if (number < 0) {
			cout << number << " ";
		}
	}
	cout << endl;
	return 0;

}

