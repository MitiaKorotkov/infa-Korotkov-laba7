#include <iostream>
#include <string>
#include <float.h>
#include <iomanip>
#include <math.h>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

float av(float* a, int n) {
	float sum = 0;
	for (int i = 0; i < n; ++i)
		sum += a[i];
	return sum / (float)n;
}

float av_conveer(float* a, int n) {
	float sum = 0, sum1 = 0;
	for (int i = 0; i < n; i += 2) {
		sum += a[i];
		sum1 += a[i + 1];
	}
	return (sum + sum1) / (float)n;
}

auto time_of_av(){
	float a[100000];
	float tmp = 0;
	for (int i = 0; i < 10000; ++i)
		a[i] = rand() % 100;
	auto start = steady_clock::now();
	tmp = av(a, 100000);
	auto finish = steady_clock::now();
	return duration_cast<milliseconds>(finish - start).count();
}

int main() {
	auto t = 0;
	srand(time(NULL));
	for(int i = 0; i < 10000; ++i){
		t += time_of_av();
	}
	cerr << t;
	return 0;
}