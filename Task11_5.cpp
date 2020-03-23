//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <math.h>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	ofstream out("PI_Digits_5.txt");
//	unsigned int const iteration_count = 1000000;
//	long long num = 4, div = 3;
//	double pi = 3;
//	int sign = 1;
//	for (int i = 0; i < iteration_count; ++i) {
//		pi += sign * 4.0 / double((div - 1) * div * (div + 1));
//		div += 2;
//		sign *= -1;
//	}
//	out << setprecision(30) << fixed << pi << endl;
//	out.close();
//	return 0;
//}