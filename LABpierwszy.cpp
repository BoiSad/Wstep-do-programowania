#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	// ZADANIE 1
	cout << "ZADANIE 1 " << endl;
	int nr_albumu = 65552;
	cout << "nr albumu: " << nr_albumu << endl;

	// ZADANIE 2
	cout << "ZADANIE 2 " << endl;
	int a; float liczba1; double liczba2;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a % 2 == 0) cout << "parzysta" << endl;
	else cout << "nieparzysta" << endl;

	// ZADANIE 3
	cout << "ZADANIE 3 " << endl;
	cout << "wprowadz pierwsza liczbe: ";
	cin >> liczba1;
	cout << "wprowadz druga liczbe: ";
	cin >> liczba2;
	if (liczba1 > liczba2) cout << liczba1 << " jest wieksza od " << liczba2 << endl;
	else if (liczba1 < liczba2) cout << liczba2 << " jest wieksze od " << liczba1 << endl;
	else if (liczba1 == liczba2) cout << " liczby sa takie same " << endl;

	// ZADANIE 4
	cout << "ZADANIE 4 " << endl;
	float l1, l2, l3, l4;

	cout << "wprowadz liczby: ";
	cin >> l1;
	cin >> l2;
	cin >> l3;
	cin >> l4;

	float srednia;

	srednia = (l1 + l2 + l3 + l4) / 4;
	cout << "Srednia wynosi: " << srednia << endl;

	//ZADANIE 5
	cout << "ZADANIE 5 " << endl;
	cout << "kalkulator" << endl;
	int operacja;
	float cyfra1, cyfra2;
	cout << "Podaj liczbe: ", cin >> cyfra1;
	cout << "Podaj druga: ", cin >> cyfra2;
	cout << "\n=========================\2" << endl;
	cout << "Operacja : 1.Dodawanie , 2.Odejmowanie, 3.Mnozenie,  4.Dzielenie" << endl;
	cout << "Wybierz dzialanie: ", cin >> operacja;
	switch (operacja){
	case 1:
		cout << "Suma: " << cyfra1 << " + " << cyfra2 << " = " << cyfra1 + cyfra2 << endl;
		break;
	case 2:
		 cout<< "Roznica  " << cyfra1 << " - " << cyfra2 << " = " << cyfra1 - cyfra2 << endl;
		break;
	case 3:
		cout << "Iloraz:  " << cyfra1 << " * " << cyfra2 << " = " << cyfra1 * cyfra2 << endl;
		break;
	case 4:
		cout << "Iloraz:  " << cyfra1 << " / " << cyfra2 << " = " << cyfra1 / cyfra2 << endl;
		break;
	default:
		cout << "Nie ma takiej opcji/n";
		break;
	}
	
	
	
	












}
	

	

	



