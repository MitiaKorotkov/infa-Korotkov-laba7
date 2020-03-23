//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <math.h>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	ofstream out("PI_Digits_3.txt");
//	unsigned int const iteration_count = 1000000;
//	long long div = 2;
//	double num = sqrt(2);
//	double pi = 1;
//	for (int i = 0; i < iteration_count; ++i) {
//		pi *= num / double(div);
//		num = sqrt(2 + num);
//	}
//	out << setprecision(30) << fixed << 2 / pi << endl;
//
//	out.close();
//	return 0;
//}