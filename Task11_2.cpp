//#include <iostream>
//#include <iomanip>
//#include <fstream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	ofstream out("PI_Digits_2.txt");
//	unsigned int const iteration_count = 1000000;
//	long long div = 1, num = 2;
//	int sign = -1;
//	double pi = 1;
//	for (int i = 0; i < iteration_count; ++i) {
//		pi *= (double(num) / double(div));
//		(i % 2) ? num += 2 : div += 2;
//	}
//	out << setprecision(30) << fixed << 2 * pi << endl;
//
//	out.close();
//	return 0;
//}