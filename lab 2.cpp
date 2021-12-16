#include <iostream>
using namespace std;
int main()
{
    int d1, d2, d3, d4;
    cout << "Enter amount of dates" << endl;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the date" << endl;
        cin >> d1 >> d2 >> d3;
        d4 = d3;

        if ((d3 % 4 != 0) && (d2 < 3))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if (d4 % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    d4 += 1;
                }
                if (!(k1 % 7 == 0) || !(d4 % 4 != 0) || !(k != 1) || !(d4 >= 2016)) {
                    if (d4 % 4 == 0) {
                        k += 2;
                        k1 += 2;
                        d4 += 1;
                    }
                    if (!(k1 % 7 == 0) || !(d4 % 4 != 0) || !(k != 1) || !(d4 >= 2016))
                        continue;
                    break;
                } else {
                    break;
                }
            }
        }

        if ((d3 % 4 != 0) && (d2 > 2))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if ((k1 % 7 == 0) && (k != 1) && (d4 >= 2016))
                    break;
                if ((d4 + 1) % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    d4 += 1;
                }
                if ((k1 % 7 == 0) && (k != 1) && (d4 >= 2016))
                    break;
                if ((d4 + 1) % 4 == 0)
                {
                    k += 2;
                    k1 += 2;
                    d4 += 1;
                }
            }
        }


        if ((d3 % 4 == 0) && (d2 < 3))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if (d4 % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    d4 += 1;
                }
                if ((k1 % 7 == 0) && (d4 % 4 == 0) && (k != 1) && (d4 >= 2016))
                {
                    break;
                }
                if (d4 % 4 == 0)
                {
                    k += 2; k1 += 2;
                    d4 += 1;
                }
                if ((k1 % 7 == 0) && (d4 % 4 == 0) && (k != 1) && (d4 >= 2016))
                {
                    break;
                }
            }
        }

        if ((d3 % 4 == 0) && (d2 > 2))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if ((k1 % 7 == 0) && (k != 1) && (d4 >= 2016))
                {
                    break;
                }
                if ((d4 + 1) % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    d4 += 1;
                }
                if ((k1 % 7 == 0) && (k != 1) && (d4 >= 2016))
                {
                    break;
                }
                if ((d4 + 1) % 4 == 0)
                {
                    k += 2;
                    k1 += 2;
                    d4 += 1;
                }

            }
        }

        if (d3 >= 2016)
            d4 = d3;

        cout << d4 << endl;
    }


    return 0;
}