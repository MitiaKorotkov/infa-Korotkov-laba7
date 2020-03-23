#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream out("PI_Digits_4.txt");
	unsigned int const iteration_count = 1000000;
	double pi = 1;
		double sum = 0;
		for (uint64_t k = 0; k < iteration_count; ++k)
			sum += pow(-1, k) / (pow(3, k) * (k * 2 + 1));
		pi = 2 * sqrt(3) * sum;
	out << setprecision(30) << fixed << pi << endl;

	out.close();
	return 0;
}