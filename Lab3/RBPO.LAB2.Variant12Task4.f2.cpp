#include <iostream>
module LubitskyNRbas_2101_lab2_Variant12_Task4:f2;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double f2(double x) {
				if (x <= 3.0) {
					return (fabs(pow(-x, 2) + 3 * x + 9));
				}
				else {
					return (sqrt(pow(x, 2) + (1 / x)));
				}
			}
		}
	}
}