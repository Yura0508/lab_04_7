// lab_04_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a, R, S;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;


	if (fabs(xp) < 1 && fabs(xk) < 1) {


		
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << "    |"
		<< setw(11) << "arcctg(x)" << " |"
		<< setw(10) << "S" << "    |"
		<< setw(5) << "n" << "   |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	
		while (x <= xk)
		{
			n = 0; // вираз залежить від умови завдання варіанту
			a = -x; // вираз залежить від умови завдання варіанту
			S = (4 * atan(1.0)) / 2 + a;
			do {
				n++;
				R = -((2 * n - 1) * pow(x, 2) / (2 * n + 1)); // вираз залежить від умови завдання варіанту
				a *= R;
				S += a;
			} while (abs(a) >= eps);
			cout << "|" << setw(10) << setprecision(2) << x << " |"
				<< setw(12) << setprecision(5) << atan(-x) + 4 * atan(1.0) / 2 << " |"
				<< setw(12) << setprecision(5) << S << " |"
				<< setw(7) << n << " |"
				<< endl;
			x += dx;
		}
	
	cout << "-------------------------------------------------" << endl;
		

	} else  cout << "NaN" << endl;
	cin.get();
	return 0;
}
