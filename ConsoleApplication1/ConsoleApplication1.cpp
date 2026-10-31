#include <iostream> 
#include <math.h>
using namespace std; 
int main() {
	//zadanie 1 
	int a;
	int b;
	cout << "Prosze podac wartosc liczby calkowitej a\n";
	cin >> a;
	cout << "Prosze podac wartosc liczby calkowitej b\n";
	cin >> b;
	if (a == b) {
		cout << "Wprowadzone liczby sa sobie rowne\n";
	}
	else if (a < b) {
		cout << "Liczba a jest mniejsza od b\n";
	}
	else {
		cout << "Liczba a jest wieksza od b\n";
	}

	/*/zadanie 2
	int a;
	int b;
	cout << "Prosze podac wartosc liczby calkowitej a\n";
	cin >> a;
	cout << "Prosze podac wartosc liczby calkowitej b\n";
	cin >> b;
	if (a == b) {
		cout << "Wprowadzone liczby sa sobie rowne\n";
	}
	else {
		if (a < b) {
			cout << "Liczba a jest mniejsza od b\n";
		}
		else {
			cout << "Liczba a jest wieksza od b\n";
		}
	}

*/
//zadanie 3 
	double r;
	cout << "Prosze podac wartosc r\n";
	cin >> r;
	if (0.7 <= r && r <= 1) {
		cout << "Bardzo silna korelacja dodatnia\n";
	}
	else if (r >= 0.5) {
		cout << "Silna korelacja dodatnia\n";
	}
	else if (r >= 0.3) {
		cout << "Umiarkowana korelacja dodatnia\n";
	}
	else if (r >= 0.2) {
		cout << "S³aba korelacja dodatnia\n";
	}
	else {
		cout << "Brak korelacji\n";
	}

	/*zadanie 4
	double pierwsza;
	double druga;
	char znak;
	cout << "Prosze podac wartosc pierwszej liczby zmiennoprzecinkowej\n";
	cin >> pierwsza;
	cout << "Prosze podac wartosc drugiej liczby zmiennoprzecinkowej\n";
	cin >> druga;
	cout << "Prosze wprowadzic znak dzialania\n";
	cin >> znak;
	switch (znak) {
	case '+':
		cout << "Wynik to: " << pierwsza + druga << endl;
		break;
	case '-':
		cout << "Wynik to: " << pierwsza - druga << endl;
		break;
	case '*':
		cout << "Wynik to: " << pierwsza * druga << endl;
		break;
	case '/':
		cout << "Wynik to: " << pierwsza / druga << endl;
		break;
	}
	/* // zadanie 5
	for (int i = 1; ; i++) {
		cout << i << endl;
	}
	*/
	//zadanie 6 
	double pierwsza;
	double druga;
	char znak;


	int koniec;
	while (1) {

		cout << "Prosze podac wartosc pierwszej liczby zmiennoprzecinkowej\n";
		cin >> pierwsza;
		cout << "Prosze podac wartosc drugiej liczby zmiennoprzecinkowej\n";
		cin >> druga;
		cout << "Prosze wprowadzic znak dzialania\n";
		cin >> znak;


		switch (znak) {
		case '+':
			cout << "Wynik to: " << pierwsza + druga << endl;
			break;
		case '-':
			cout << "Wynik to: " << pierwsza - druga << endl;
			break;
		case '*':
			cout << "Wynik to: " << pierwsza * druga << endl;
			break;
		case '/':
			cout << "Wynik to: " << pierwsza / druga << endl;
			break;
		}
		cout << "Jesli chcesz zakonczyc petle- wpisz 2\n";
		cin >> koniec;
		if (koniec == 2) {
			break;
		}
	}
	//zadanie 7 
	int c = 1;
	while (1) {
		c++;
		if (c % 2 == 0) {
			if (c == 200) {
				break;
			}
			else {
				continue;
			}
		}
		else {
			cout << c << endl;
		}
	}
	//zadanie 8 
	int naturalna;
	cout << "Prosze podac liczbe naturalna dodatnia" << endl;
	cin >> naturalna;
	for (int i = 2; i <= (sqrt(naturalna)); i++) {
		if (naturalna % i == 0) {
			cout << "Ta liczba posiada dzielnik" << endl;
			break;
		}
	}
	//zadanie 9 
	double temp;
	cout << "Prosze podac temperature " << endl;
	cin >> temp;
	if (temp < 0) {
		cout << "Mroz" << endl;
	}
	else if (temp >= 0 && temp < 10) {
		cout << "Zimno" << endl;
	}
	else if (temp >= 10 && temp < 20) {
		cout << "Umiarkowanie" << endl;
	}
	else if (temp >= 20 && temp < 30) {
		cout << "Cieplo" << endl;
	}
	else {
		cout << "Goraco" << endl;
	}

	//zadanie 10 
	int liczba1;
	int liczba2;
	int liczba3;
	int najwieksza = 0;
	cout << "Prosze podac liczbe calkowita do porownania" << endl;
	cin >> liczba1;
	liczba1 = najwieksza;
	cout << "Prosze podac liczbe calkowita do porownania" << endl;
	cin >> liczba2;
	if (liczba2 > najwieksza) {
		najwieksza = liczba2;
	}
	cout << "Prosze podac liczbe calkowita do porownania" << endl;
	cin >> liczba3;
	if (liczba3 > najwieksza) {
		najwieksza = liczba3;
	}
	cout << "Najwieksza liczba to: " << najwieksza << endl;

	//zadanie 11
	int rok;
	cout << "Prosze podac rok" << endl;
	cin >> rok;
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
		cout << rok << " Jest przestepny" << endl;
	}
	else {
		cout << rok << " Nie jest przestepny" << endl;
	}
	return 0;
} 



