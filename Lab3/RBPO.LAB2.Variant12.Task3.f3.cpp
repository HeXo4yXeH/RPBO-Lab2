module LubitskyNRbas_2101_lab2_Variant12_Task3;

namespace RBPO {
	namespace Lab2 {
		namespace Task3 {
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