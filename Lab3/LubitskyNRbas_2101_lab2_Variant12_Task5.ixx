export module LubitskyNRbas_2101_lab2_Variant12_Task5;
#define M_PI
import <cmath>;

export namespace RBPO {
	namespace Lab2 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab2::Task5::f1(double x) {
	return (((sin(4 * x), 2) / (1 + cos(4 * x)))) * (cos(2 * x) / (1 + cos(2 * x)));
}
double RBPO::Lab2::Task5::f2(double x) {
	if (x <= 3.0) {
		return (fabs(pow(-x, 2) + 3 * x + 9));
	}
	else {
		return (sqrt(pow(x, 2) + (1 / x)));
	}
}
double RBPO::Lab2::Task5::a(int i) {
	return  (pow(-1.0, i) * (1 / (pow(i, 2) + pow(2, i))));
}
double RBPO::Lab2::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}