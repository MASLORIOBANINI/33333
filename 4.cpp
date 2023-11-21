

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int n;
    cout << "введите размер масива";
    cin >> n;
    int X[8];
    cout << "введите элементы массива ";
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    int max_value = X[0];
    int min_value = X[0];
    int max_index = 0;
    int min_index = 0;
    for(int i = 1; i < n; i++) {
        if (X[i] > max_value) {
            max_value = X[i];
            max_index = i;
        }
        if (X[i] < min_value) {
            min_value = X[i];
            min_index = i;
        }
    }
    cout << "максимальный элемент " << max_value << endl;
    cout << "индекс максимального элемента " << max_index << endl;
    cout << "минимальный элемент " << min_value << endl;
    cout << "индекс минимального элемента " << min_index << endl;
    return 0;
}