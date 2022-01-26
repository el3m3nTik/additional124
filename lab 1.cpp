#include <iostream>
int main()
{
    int Q1, P1, Q2, P2, A, Amin;
    std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;
    Amin = INT_MAX;
    if (Q1 < Q2)
    {
        std::swap(Q1, Q2);
        std::swap(P1, P2);
    }
    int count = 0, B = A;
    while (B > 0)
    {
        count++;
        B -= Q1;
    }
    int C = count, D = 0;
    int summ = 0;
    while (C != 0)
    {   
        summ = C * P1 + D * P2;
        if (Amin > summ)
        {
            Amin = summ;
        }
        C--;
        while (C * Q1 + D * Q2 < A)
            D++;
    }
    int x = 0; 
    while (x * Q2 < A)
        x++;
    if (Amin > x * P2)
    {
        Amin = x * P2;
    }
    std::cout << Amin;
}



