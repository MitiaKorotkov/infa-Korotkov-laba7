#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <float.h>

using namespace std;

int main() {
	using type = float;
	ofstream out("PI_Digits_4.txt");
	uint64_t const iteration_count = 1000000;
	type pi = 1;
		type sum = 0;
		for (uint64_t k = 0; k < iteration_count; ++k)
			sum += pow(-1, k) / (pow(3, k) * (k * 2 + 1));
		pi = 2 * sqrt(3) * sum;
	out << setprecision(30) << fixed << pi << endl;

	out.close();
	return 0;
}