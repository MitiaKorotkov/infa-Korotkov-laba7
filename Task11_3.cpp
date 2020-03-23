#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
	using type = float;
	ofstream out("PI_Digits_3.txt");
	uint64_t const iteration_count = 1000000000;
	uint64_t div = 2;
	type num = sqrt(2);
	type pi = 1;
	for (int i = 0; i < iteration_count; ++i) {
		pi *= num / type(div);
		num = sqrt(2 + num);
	}
	out << setprecision(30) << fixed << 2 / pi << endl;

	out.close();
	return 0;
}