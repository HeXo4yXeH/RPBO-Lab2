#include <iostream>
module LubitskyNRbas_2101_lab2_Variant12_Task3;

namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
			double a(int i) {
				return  (pow(-1.0, i) * (1 / (pow(i, 2) + pow(2, i))));
			}
		}
	}
}