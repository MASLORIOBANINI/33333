
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number;
	int count = 0;
	int sum = 0;
	cout << "введите числа (для завершения введите 0) " << endl;
	do {
		cout << "введите число";
		cin >> number;
		if (number != 0) {
			sum += number;
			count++;
		}
	} while (number != 0);
	if (count > 0) {
		double averaage = static_cast<double>(sum) / count;
		cout << "количество введенных чисел" << count << endl;
		cout << "общая сумма чисел" << sum << endl;
		cout << "среднее арифмитическое" << averaage << endl;
	}
	else {
		cout << "вы не ввели ни одного числа " << endl;
	}
	return 0;
}

