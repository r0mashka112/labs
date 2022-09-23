#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//exercise 1
	cout << "Nechaev Roman Igorevich" << endl << "Group number: 221-332" << endl;

	//exercise 2
	cout << "min int: " << INT_MIN << endl << "max int: " << INT_MAX << endl;
	cout << "min long: " << LONG_MIN << endl << "max long: " << LONG_MAX << endl;
	cout << "min char: " << numeric_limits<char>::min() << endl << "max char: " << numeric_limits<char>::max() << endl;
	cout << "min short: " << numeric_limits<short>::min() << endl << "max short: " << numeric_limits<short>::max() << endl;
	cout << "min double: " << numeric_limits<double>::min() << endl << "max double: " << numeric_limits<double>::max() << endl;
	cout << "min bool: " << numeric_limits<bool>::min() << endl << "max bool: " << numeric_limits<bool>::max() << endl;
	cout << "min unsigned int: " << numeric_limits<unsigned int>::min() << endl << "max unsigned int: " << numeric_limits<unsigned int>::max() << endl;
	cout << "min unsigned short: " << numeric_limits<unsigned short>::min() << endl << "max unsigned short: " << numeric_limits<unsigned short>::max() << endl;

	//exercise 3
	cout << "Enter number: " << endl;
	int number; cin >> number;
	cout << "bin: " << bitset<16>(int(number)) << endl;
	cout << "hex: " << hex << number << endl;
	cout << "bool: " << bool(number) << endl;
	cout << "double: " << double(number) << endl;
	cout << "oct: " << oct << number << endl;
	cout << "char: " << char(number) << endl;
	cout << "long: " << long(number) << endl;

	//exercise 4
	cout << "Enter coeffs (a and b): " << endl;
	double a, b; cin >> a >> b;
	cout << a << " * x = " << b << endl;
	cout << "x = " << b << " / " << a << endl;
	cout << "x = " << b / a << endl;

	//exercrise 5
	cout << "Enter two points: " << endl;
	int x, y; cin >> x >> y;
	float midpoint = (x + y) / 2.;
	cout << "Midpoint: " << midpoint;
}