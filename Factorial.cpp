#include <iostream>
#include <cstdio>
using namespace std;

int f(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * f(n - 1);
}

int main()
{
    int n, res;
    cin >> n;

    res = f(n);

    cout << res << endl;
}

