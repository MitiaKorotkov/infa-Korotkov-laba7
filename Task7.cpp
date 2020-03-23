#include <iostream>
#include <string>
#include <float.h>
#include <iomanip>
#include <math.h>


using namespace std;

void foo_f() {
	float f = 1;
	float d = 0.1;
	for (int i = 0; i < 50; ++i) {
		d /= 10;
		cout << setprecision(100) << fixed << d << endl;
	}
	d = 0.0000000298027;
	f = 1;
	for (;;) {
		cout << setprecision(100) << fixed << f << endl;
		f -= d;
	}
}

int main() {
	foo_f();
	return 0;
}
