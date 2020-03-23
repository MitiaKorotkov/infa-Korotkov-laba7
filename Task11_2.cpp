#include <iostream>
#include <iomanip>
#include <fstream>
#include <float.h>
using namespace std;

int main() {
	using type = float;
	setlocale(LC_ALL, "Russian");
	ofstream out("PI_Digits_2.txt");
	uint64_t const iteration_count = 100000000;
	long long div = 1, num = 2;
	int sign = -1;
	type pi = 1;
	for (int i = 0; i < iteration_count; ++i) {
		pi *= (type(num) / type(div));
		(i % 2) ? num += 2 : div += 2;
	}
	out << setprecision(30) << fixed << 2 * pi << endl;

	out.close();
	return 0;
}