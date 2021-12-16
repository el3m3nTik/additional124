#include <iostream>
#include <climits>

int main()
{
    int Q1, P1, Q2, P2, A;
    std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;
    int num = A / Q1 + (A % Q1 != 0);
    int maxx = INT_MAX;
    for (int i = 0; i < num; i++)
    {
        int a = A - i * Q1;
        auto m = 0;
        if (a <= 0) {
            m = 0 + i * P1;
        }
        else {
            m = (a / Q2 + (a % Q2 != 0)) * P2 + i * P1;
        }
        if (m < maxx) {
            maxx = m;
        }
    }
    std::cout << maxx << std::endl;
}