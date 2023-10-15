#include <iostream>
module LubitskyNRbas_2101_lab2_Variant12_Task4:a;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double a(int i) {
				return  (pow(-1.0, i) * ((i + 1) / (pow(i, 3) + 2)));
			}
		}
	}
}