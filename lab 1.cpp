#include <iostream>
#include <climits>
#include <math.h>

int main()
{
	int Q1, P1, Q2, P2, A;
	int Amin = INT_MAX;
	std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;

	for (int i = 0; i <= ceil(float(A) / float(Q1)); i++) {
		for (int j = 0; j <= ceil(float(A) / float(Q2)); j++) {
			if ((i * Q1 + j * Q2 >= A) && (i * P1 + j * P2 < Amin) && (i * P1 + j * P2 > 0))
				Amin = i * P1 + j * P2;
		}
	}
	std::cout << Amin;
	return 0;
}


