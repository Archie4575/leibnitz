#include <iostream>
#include <iomanip>
#include <cmath>

/*
-----------==| Leibnitz Formula for π |==-----------
Usage: leibnitz <repitions>
*/

using namespace std;

int main (int argc, char *argv[]) {
	if(argc == 2) { // Checks for one argument
		long double pi {0.0};
		double temp {0}, progress {0};
		long n = atol(argv[1]); 
		for (double k = 0; k < n; k++) { // Repeat 'n' times, adding to pi each time
			//temp = pow(-1,k);         
			//temp /= (2 * k) + 1; 
			//pi += temp;
			pi += (pow(-1, k) / (2 * k + 1));
			progress = k / n * 100;
			cout << ceil(progress) << "%\r"; // Progress display
			cout.flush();
		}
		cout << "\nPi: ";
        	std::cout << std::setprecision(32) << pi*4.0 << "\n";
	} else {
		cout << "Usage: leibnitz <repitions>\n";
	}
	return 0;
}
