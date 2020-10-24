#include <iostream>
#include <iomanip>
#include <cmath>

/*
-----------==| Leibnitz Formula for π |==-----------
Usage: leibnitz <repitions>

Example: leibnitz 10000
3.1414926535900434137818515445417
Accuracy: 99.99681690114612932218651764060269%
*/

using namespace std;

int main (int argc, char *argv[]) {
	if(argc == 2) { // Checks for one argument
		long double pi {0.0};
		double progress {0.0};
		long n = atol(argv[1]); 
		for (double k {0.0}; k < n; k += 1.0) { // Repeat 'n' times, adding to pi each time
			pi += (pow(-1, k) / (2 * k + 1));
			progress = k / n * 100;
			std::cout << std::setprecision(32) << pi*4.0; // displays pi being calculated live
				std::cout << "  |  " << ceil(progress) << "%\r"; // displays progress as percentage
			std::cout.flush();
		}
		std::cout << std::setprecision(32) << pi*4.0 << "\n"; // Final display
		std::cout << "Accuracy: " << std::fixed << abs((pi*4.0)/3.1415926535897932384626433832795)*100.0 << "%\n";
	} else {
		std::cout << "Usage: leibnitz <repitions>\n";
	}
	return 0;
}
