#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int xumOfNumx(int n) {
    if (n < 10) {
        return n;
    }
    if (n >= 10 && n < 100) {
        return ((n / 10) + n % 10);
    }
    if (n >= 100 && n < 1000) {
        return ((n / 100) % 10 + (n / 10) % 10 + n % 10);
    }
    if (n >= 1000 && n < 10000) {
        return ((n / 1000) % 10 + (n / 100) % 10 + (n / 10) % 10 + n % 10);
    }
    if (n = 10000) {
        return 1;
    }
}

int multiplicationOfNumx(int n) {
    if (n < 10) {
        return n;
    }
    if (n >= 10 && n < 100) {
        return ((n / 10) * n % 10);
    }
    if (n >= 100 && n < 1000) {
        return ((n / 100) % 10 * (n / 10) % 10 * n % 10);
    }
    if (n >= 1000 && n < 10000) {
        return ((n / 1000) % 10 * (n / 100) % 10 * (n / 10) % 10 * n % 10);
    }
    if (n = 10000) {
        return 0;
    }

}*/
int main()
{
    int sumOfNums = 0;
    int multiplicationOfNums = 1;
    int x, data;
    vector<int> v1{ 189, 99, 75, 346, 43 };

    for (int i = 0; i < v1.size(); i++)
    {
        x = v1[i];
        sumOfNums = 0;
        while (x > 0)
        {
            data = x % 10;
            x /= 10;
            sumOfNums += data;
        }

        if (sumOfNums == 18) {
            v1.erase(v1.begin() + i);
        }
    }
    int size = v1.size();
    for (int i = 0; i < size; i++) {
        x = vec[i];
        multiplicationOfNums = 1;
        while (x > 0)
        {
            data = x % 10;
            x /= 10;
            multiplicationOfNums *= data;
        }

        if (multiplicationOfNums == 35)
        {
            v1.insert(v1.end(), v1[i]);
        }
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
        cout << vec[i] << " ";
    return 0;
}
