#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfNums(int n) {
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

int multiplicationOfNums(int n) {
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

}

int main() {
    vector<int> v1;
    int n, x;
    cout << "Enter the size of the vector: ";
    cin >> n;
    cout << "Enter vector values:\n";
    for (int j = 0; j < n; j++) {
        cin >> x;
        v1.push_back(x);
    for (int j = 0; j < v1.size(); j++) {
        if (sumOfNums(v1[j]) == 18) {
            v1.erase(v1.begin() + j);
            }
        }
    }
    int size = v1.size();
    for (int j = 0; j < size; j++) {
        if (multiplicationOfNums(v1[j]) % 35 == 0) {
            v1.insert(v1.end(), v1[j]);
        }
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    return 0;

}