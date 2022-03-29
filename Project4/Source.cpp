#include <iostream>
using namespace std;

int main() {
	int factorial(int);

	int n, vysledok;

	cout << "zadaj cislo: " << endl;
	cin >> n;

	vysledok = factorial(n);
	cout << " faktorial cisla " << n << "je:" << vysledok << endl;

	return 0;

}

int factorial(int n)
{
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}
