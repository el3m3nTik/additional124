#include <iostream>
using namespace std;
int main()
{
    int date1, date2, date3, date4;
    cout << "Enter amount of dates" << endl;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the date" << endl;
        cin >> date1 >> date2 >> date3;
        date4 = date3;

        if ((date3 % 4 != 0) && (date2 < 3))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if (date4 % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    date4 += 1;
                }
                if (!(k1 % 7 == 0) || !(date4 % 4 != 0) || !(k != 1) || !(date4 >= 2016)) {
                    if (date4 % 4 == 0) {
                        k += 2;
                        k1 += 2;
                        date4 += 1;
                    }
                    if (!(k1 % 7 == 0) || !(date4 % 4 != 0) || !(k != 1) || !(date4 >= 2016))
                        continue;
                    break;
                } else {
                    break;
                }
            }
        }

        if ((date3 % 4 != 0) && (date2 > 2))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if ((k1 % 7 == 0) && (k != 1) && (date4 >= 2016))
                    break;
                if ((date4 + 1) % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    date4 += 1;
                }
                if ((k1 % 7 == 0) && (k != 1) && (date4 >= 2016))
                    break;
                if ((date4 + 1) % 4 == 0)
                {
                    k += 2;
                    k1 += 2;
                    date4 += 1;
                }
            }
        }


        if ((date3 % 4 == 0) && (date2 < 3))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if (date4 % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    date4 += 1;
                }
                if ((k1 % 7 == 0) && (date4 % 4 == 0) && (k != 1) && (date4 >= 2016))
                {
                    break;
                }
                if (date4 % 4 == 0)
                {
                    k += 2; k1 += 2;
                    date4 += 1;
                }
                if ((k1 % 7 == 0) && (date4 % 4 == 0) && (k != 1) && (date4 >= 2016))
                {
                    break;
                }
            }
        }

        if ((date3 % 4 == 0) && (date2 > 2))
        {
            int k = 1, k1 = 0;
            for (; ;)
            {
                if ((k1 % 7 == 0) && (k != 1) && (date4 >= 2016))
                {
                    break;
                }
                if ((date4 + 1) % 4 != 0)
                {
                    k += 1;
                    k1 += 1;
                    date4 += 1;
                }
                if ((k1 % 7 == 0) && (k != 1) && (date4 >= 2016))
                {
                    break;
                }
                if ((date4 + 1) % 4 == 0)
                {
                    k += 2;
                    k1 += 2;
                    date4 += 1;
                }

            }
        }

        if (date3 >= 2016)
            date4 = date3;

        cout << date4 << endl;
    }


    return 0;
}