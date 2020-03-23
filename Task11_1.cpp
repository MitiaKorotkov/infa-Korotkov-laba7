#include <iostream>
#include <iomanip>
#include <float.h>
#include <fstream>


using namespace std;

int main() {
	using type = float;
	setlocale(LC_ALL, "Russian");
	ofstream out("PI_Digits_1.txt");
	unsigned int const iteration_count = 100000;
	long long div = 3;
	int sign = -1;
	type pi = 1;
	for (int i = 0; i < iteration_count; ++i) {
		pi += sign * (1 / (type)div);
		div += 2;
		sign *= -1;
	}
	out << setprecision(30) << fixed << 4 * pi << endl;
	out.close();
	return 0;
}