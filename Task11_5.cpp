#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <float.h>

using namespace std;

int main() {
	using type = float;
	ofstream out("PI_Digits_5.txt");
	uint64_t const iteration_count = 1000000;
	uint64_t num = 4, div = 3;
	type pi = 3;
	int sign = 1;
	for (int i = 0; i < iteration_count; ++i) {
		pi += sign * 4.0 / type((div - 1) * div * (div + 1));
		div += 2;
		sign *= -1;
	}
	out << setprecision(30) << fixed << pi << endl;
	out.close();
	return 0;
}