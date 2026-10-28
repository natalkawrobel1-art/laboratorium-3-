#include <iostream> 
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
	return 0;
} 
