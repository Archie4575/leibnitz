#include <iostream>
#include <iomanip>
#include <cmath>

/*
-----------==| Leibnitz Formula for π |==-----------
Usage: leibnitz <repitions>
*/

using namespace std;

int main (int argc, char **argv ) {
	if(argc == 2) { // Checks for one argument
		double pi = 0;
		double temp, progress;
		int n = atoi(argv[1]); 
		for (double k=0; k<n; k++) { // Repeat 'n' times, adding to pi each time
			temp = pow(-1,k);         
			temp /= (2 * k) + 1; 
			pi += temp;
			progress = k / n * 100;
			cout << ceil(progress) << "%\r"; // Progress display
			cout.flush();
		}
		cout << "\nPi: ";
        std::cout << std::setprecision(16) << pi*4.0 << "\n";
	} else {
		cout << "Usage: leibnitz <repitions>\n";
	}
	return 0;
}
