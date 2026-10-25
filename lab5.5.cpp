#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int NextValue(const int a, const int b, const int c, const int m,
    const int v1, const int v2)
{
    return (a * v1 + b * v2 + c) % m;
}

void Generate(const int a, const int b, const int c, const int m,
    const int v2, const int v1, const int i, const int N,
    int level, int& depth)
{
    if (level > depth)
        depth = level;
    cout << " level = " << level << endl;
    int v = NextValue(a, b, c, m, v1, v2);
    cout << " V" << i << " = " << v << endl;
    if (i < N)
        Generate(a, b, c, m, v1, v, i + 1, N, level + 1, depth);
}

int main()
{
    const int a = 1103;
    const int b = 1013;
    const int c = 1234;
    const int m = 10007;
    int N;
    cout << "N = "; cin >> N;
    srand((unsigned)time(NULL));
    int V1 = rand() % m;
    int V2 = rand() % m;
    cout << " V1 = " << V1 << endl;
    cout << " V2 = " << V2 << endl;
    int depth = 0;
    Generate(a, b, c, m, V1, V2, 3, N, 1, depth);
    cout << "depth = " << depth << endl;

    return 0;
}