#include <iostream>
#include <string>
#include <cmath>
#include "Vector.h"
#include "Test.cpp"
using namespace std;

int main() {
	cout << "Runing tests" << endl;
	Test();
	cout << "All tests succsessfull" << endl;
	float a, b, c, d;
	cout << "Enter the coordinates of the first vector" << endl;
	cin >> a >> b;
	StandVector sv1(a, b);
	if (cin.fail()) {
		cout << "Not a number entered";
		return 0;
	}
	cout << "Enter the coordinates of the second vector" << endl;
	cin >> c >> d;
	StandVector sv2(c, d);
	if (cin.fail()) {
		cout << "Not a number entered";
		return 0;
	}

	int choice;
	while (true) {
		std::cout << "\nMeny\n";
		std::cout << "1. Find sum of two vectors\n";
		std::cout << "2. Find difference of two vectors\n";
		std::cout << "3. Find multiply first vector by number\n";
		std::cout << "4. Find scalar product\n";
		std::cout << "5. Find vector length \n";
		std::cout << "6. Find unit vector parallel to the given\n";
		std::cout << "7. Call help module\n";
		std::cout << "8. Leave\n";
		std::cout << "Choice action: ";
		cin >> choice;
		
		if (choice == 1)
			std::cout << endl << _sum(sv1, sv2).FormateVector() << endl;
		else if (choice == 2)
			std::cout << endl << _razn(sv1, sv2).FormateVector();
		else if (choice == 3) {
			float t;
			cout << "Enter number: ";
			cin >> t;
			std::cout << endl << _proizv_na_chislo(sv1, t).FormateVector();
		}
		else if (choice == 4)
			std::cout << endl << _scale_proizv(sv1, sv2);
		else if (choice == 5)
			std::cout << endl << _long_vector(sv1);
		else if (choice == 6) {
			int chc_vector;
			std::cout << endl << "Which vector u want use?" << endl;
			std::cin >> chc_vector;
			if (chc_vector == 1)
				std::cout << endl << _evector(sv1).FormateVector();
			else
				std::cout << endl << _evector(sv2).FormateVector();
		}
		else if (choice == 7) {
			std::cout << endl;
			_help();
		}
		else if (choice == 8)
			return 0;
		else {
			std::cout << "This choice doesn't exsit";
			break;
		}
	}
	return 0;
}
