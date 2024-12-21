#include <iostream>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

signed main()
{
    fastIO();
    // C++ is an extension of C
    // Every statement we write in C is executable in C++

    // scanf and printf for C iostream
    // cin and cout for C++ iostream

    // By default C and C++ iostreams are synced
    // less sync -> faster execution

    // cin is tied with cout

    int x, y;

    cin >> x;

    cout << "This is x " << x << '\n';

    cin >> y;

    cout << "This is y " << y << '\n';
}