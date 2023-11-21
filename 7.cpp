
#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    long long u = 1;
    for (int i = 1; i <= n; i++)
        u *= (i * (i + 1)) / 2;
    cout << u << endl;
    return 0;
}
