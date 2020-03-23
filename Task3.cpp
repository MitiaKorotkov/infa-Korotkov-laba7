#include <iostream>
#include <string>
#include <float.h>

using namespace std;

int main() {
	float a = 0.15625;
	unsigned int* x = (unsigned int*)(&a);
	for (int i = sizeof(*x) * 8 - 1; i >= 0; --i) {
		cout << (int)((*x >> i) & 1);
	}
	return 0;
}
