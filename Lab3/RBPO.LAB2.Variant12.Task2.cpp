#include <iostream>
#define M_PI
module LubitskyNRbas_2101_lab2_Variant12_Task2;

namespace RBPO {
	namespace Lab2 {
		namespace Task2 {
			double f1(double x) {
				return(((sin(4 * x), 2) / (1 + cos(4 * x)))) * (cos(2 * x) / (1 + cos(2 * x)));
			}
			double f2(double x) {
				if (x <= 3.0) {
					return (fabs(pow(-x, 2) + 3 * x + 9));
				}
				else {
					return (sqrt(pow(x, 2) + (1 / x)));
				}
			}
			double a(int i) { 
				return  (pow(-1.0, i) * (1 / (pow(i, 2) + pow(2, i))));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred + sled;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
