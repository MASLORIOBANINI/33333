
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int n;
    cout << "введите размер массива ";
    cin >> n;
    int arr[3];
    cout << "введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "содержимое массива:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "";
    }
    cout << endl;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }
    cout << "количество чисел в массиве " << n << endl;
    cout << "сумма элементов массива кратных 3 " << sum << endl;
    cout << "количество элементов массива кратных 3 " << sum << endl;
    return 0;
}


