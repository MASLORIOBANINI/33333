
#include <iostream>
using namespace std;
int main(){
	setlocale(0, "");
	const int max = 10;
	int massive[10];
	printf("введите последовательность из 10 целых  чисел");
	for (int i = 0; i < max; ++i) 
		cin >> massive[i];
	int little = massive[0];
	for (int i = 1; i < max; ++i) {
		if (massive[i] < little)
			little = massive[i];
	}
	int count = 0;
	for (int i = 0; i < max; ++i) {
		if (massive[i] == little)
			count++;
	}
	printf("наименьшее введенное число:%i\nвстретилось:%iраз", little, count);
	return 0;

    
}
