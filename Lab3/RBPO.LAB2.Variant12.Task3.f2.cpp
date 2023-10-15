#include <iostream>
module LubitskyNRbas_2101_lab2_Variant12_Task3;

namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
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