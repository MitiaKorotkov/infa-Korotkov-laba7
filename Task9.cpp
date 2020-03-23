#include <iostream>
#include <string>
#include <float.h>
#include <iomanip>
#include <math.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

#define START_MES 
#define FINISH_MES 

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	float a = 1000.123, b = 500.456, c = 2000.403, d = 12.3930, e = 2.3402;
	cout << "Характерное время выполнения десяти миллионов операций сложения/вычитания: " << endl;
	auto start = steady_clock::now();
	for (unsigned int i = 0; i < 10000000; ++i) {
		a += b;
	}
	auto finish = steady_clock::now();
	cerr << duration_cast<milliseconds>(finish - start).count();
	cout << " мс" << endl;

	cout << "Характерное время выполнения десяти миллионов операций умножения: " << endl;
	start = steady_clock::now();
	for (unsigned int i = 0; i < 10000000; ++i) {
		d *= e;
	}
	finish = steady_clock::now();
	cerr << duration_cast<milliseconds>(finish - start).count();
	cout << " мс" << endl;

	cout << "Характерное время выполнения десяти миллионов операций деления: " << endl;
	start = steady_clock::now();
	for (unsigned int i = 0; i < 10000000; ++i) {
		c /= e;
	}
	finish = steady_clock::now();
	cerr << duration_cast<milliseconds>(finish - start).count();
	cout << " мс" << endl;
	return 0;
}