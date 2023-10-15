module LubitskyNRbas_2101_lab2_Variant12_Task4:f3;

namespace RBPO {
	namespace Lab2 {
		namespace Task4 {
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				do {
					sum += a(i);
					i++;
				} while (i <= n);
				return sum;
			}
		}
	}
}