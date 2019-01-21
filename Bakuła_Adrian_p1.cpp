#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;

/* 1.1. Zadeklarować zmienne typu int, float, char. 
Przypisać do nich wartość, wyświetlić je na ekran. */
void solution11()
{
	cout << "Rozwiazanie zadania 1.1: \n";
	cout << "Program wyświetla zmienne typu: int, float i char. \n";

	int naturalNumber = 3;
	cout << "Integer: " << naturalNumber << "\n";

	float floatingPointNumber = 5.5;
	cout << "Floating Point Number: " << floatingPointNumber << "\n";

	char character = 'A';
	cout << "Character: " << character << "\n\n";
}

/* 1.2.Wyświetlić zmienną typu int na ekran.
Należy użyć metody printf i konstrukcji %d */
void solution12()
{
	cout << "Rozwiazanie zadania 1.2: \n";
	cout << "Program wyswietla zmnienna 'i' przy pomocy printf(). \n";
	int i = 10;
	printf("Integer: %d", i);
	cout << "\n\n";
}

// 1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
void solution13()
{
	cout << "Rozwiazanie zadania 1.3: \n" << "Program liczy kwadrat podanej liczby.\n";
	cout << "Podaj liczbe x: ";
	double x;
	cin >> x;
	double power = x * x;
	cout << "Kwadrat tej liczby wynosi: " << power << "\n\n";
}

/* 1.4.Zapoznać się z instrukcjami warunkowymi(if, else if, else oraz switch).
Pobrać od używkownika liczbę i wyświetlić informację, czy jest ona : mniejsza, 
większa, czy równa 0. */
void solution14if()
{
	cout << "Rozwiazanie zadania 1.4 przy uzyciu instrukcji warunkowej if: \n";
	cout << "Program sprawdza czy liczba jest wieksza, mniejsza czy rowna 0.\n";
	cout << "Podaj liczbe: ";
	double x;
	cin >> x;
	if (x == 0)
	{
		cout << "Podana liczba jest rowna 0 \n\n";
	}
	else if (x > 0)
	{
		cout << "Podana liczba jest wieksza od 0 \n\n";
	}
	else
	{
		cout << "Podana liczba jest mniejsza od 0 \n\n";
	}
}

/* 1.4.Zapoznać się z instrukcjami warunkowymi(if, else if, else oraz switch).
Pobrać od używkownika liczbę i wyświetlić informację, czy jest ona : mniejsza,
większa, czy równa 0. */
void solution14switchIf1()
{
	cout << "Rozwiazanie zadania 1.4 przy uzyciu instrukcji warunkowej switch oraz if wersja 1: \n";
	cout << "Program sprawdza czy liczba jest wieksza, mniejsza czy rowna 0.\n";
	cout << "Podaj liczbe calkowita: ";
	int x;
	cin >> x;
	switch (x)
	{
		case 0:
			cout << "Podana liczba jest rowna 0 \n\n";
		break;

		default: 
		{
			if (x > 0) cout << "Podana liczba jest wieksza od 0 \n\n";
			else cout << "Podana liczba jest mniejsza od 0 \n\n";
			break;
		}
	}
}

/* 1.4.Zapoznać się z instrukcjami warunkowymi(if, else if, else oraz switch).
Pobrać od używkownika liczbę i wyświetlić informację, czy jest ona : mniejsza,
większa, czy równa 0. */
void solution14switchIf2()
{
	cout << "Rozwiazanie zadania 1.4 przy uzyciu instrukcji warunkowej switch oraz if wersja 2: \n";
	cout << "Program sprawdza czy liczba jest wieksza, mniejsza czy rowna 0.\n";
	cout << "Podaj liczbe calkowita: ";
	double x;
	cin >> x;

	int compare;
	if (x == 0)
		compare = 0;
	else if (x > 0)
		compare = 1;
	else
		compare = -1;
	switch (compare)
	{
	case 0:
		cout << "Podana liczba jest rowna 0 \n\n";
		break;
	case 1:
		cout << "Podana liczba jest wieksza od 0 \n\n";
		break;
	case -1:
		cout << "Podana liczba jest mniejsza od 0 \n\n";
		break;
	default: 
		cout << "Blad w dzialaniu programu! \n\n";
	}	   
}

/* 1.5.Pobrać ud użytkownika 3 liczby(x1, x2, x3).
Wyświetlić informację, która z tych liczb jest największa. */
void solution15()
{
	cout << "Rozwiazanie zadania 1.5: \n";
	cout << "Program wybiera najwieksza sposrod 3 podanych liczb: \n";
	cout << "Podaj pierwsza liczbe: ";
	double a, b, c, max;
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Podaj trzecia liczbe: ";
	cin >> c;
	cout << endl;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout << "Najwieksza liczba to: " << max << "\n\n";
}

/* 1.6.Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator 
(jeden z czterech : mnożenie, dzielenie, dodawanie,	odejmowanie).
Wymagane jest utworzenie prostego menu użytkownika.
Uwaga - należy pamiętać o ułamkach(1 / 3 powinno dać 0.33, a nie 0) */
void solution16()
{
	cout << "Rozwiazanie zadania 1.6 - Prosty kalkulator: \n";
	cout << "Podaj pierwsza liczbe: ";
	double a, b;
	cin >> a;
	cout << "Podaj druga liczbe liczbe: ";
	cin >> b;
	cout << "Obslugiwane znaki: \n";
	cout << "Dodawanie = '+'\n";
	cout << "Odejmowanie = '-'\n";
	cout << "Mnozenie = '*'\n";
	cout << "Dzielenie = '/'\n";
	cout << "Wpisz znak wybranej operacji arytmetycznej: \n";
	char x;
	cin >> x;
	if (x == '+')
		cout << "Wybrano dodawanie \nWynik: " << a + b << endl;
	else if (x == '-')
		cout << "Wybrano odejmowanie \nWynik: " << a - b << endl;
	else if (x == '*')
		cout << "Wybrano mnozenie \nWynik: " << a * b << endl;
	else if (x == '/')
	{
		if (b == 0)
			cout << "Nie mozna dzielic przez 0! \n";
		else
		cout << "Wybrano dzielenie \nWynik: " << a / b << endl;
	}
	else
		cout << "Blad wykonywania programu - sprawdz wprowadzone dane. \n";
}

/*2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez 
NIEZNANĄ Z GÓRY ilość razy. Pętla wykonuje się zawsze, jeśli warunek jest prawdziwy 
(ewaluowany do true). Napisać pętlę, w któej użytkownik podaje liczbę x. 
Należy wyświetlić tę liczbę. Jeżeli użytkownik poda 0, należy zakończyć program.*/
void solution21()
{
	cout << "Rozwiazanie zadania 2.1:\n";
	cout << "Program wyswietla wpisana liczbe:\n";
	double x = 1;
	while (x != 0)
	{
		cout << "Podaj liczbe rozna od 0, podanie liczby 0 zakonczy dzialanie programu: ";
		cin >> x;
		cout << "Podana liczba to: " << x << endl;
	}
}

/* 2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać 
użytkownika, czy ten chce powtórzyć wszystko od początku. 
Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program. */
void solution22()
{
	cout << "Rozwiazanie zadania 2.2:\n";
	cout << "Prosty kalkulator w petli while: \n";
	char c = 'y';
	while (c != 'n')
	{
		cout << "Podaj pierwsza liczbe: ";
		double a, b;
		cin >> a;
		cout << "Podaj druga liczbe liczbe: ";
		cin >> b;
		cout << "Obslugiwane znaki: \n";
		cout << "Dodawanie = '+'\n";
		cout << "Odejmowanie = '-'\n";
		cout << "Mnozenie = '*'\n";
		cout << "Dzielenie = '/'\n";
		cout << "Wpisz znak wybranej operacji arytmetycznej: \n";
		char x;
		cin >> x;
		if (x == '+')
			cout << "Wybrano dodawanie \nWynik: " << a + b << endl;
		else if (x == '-')
			cout << "Wybrano odejmowanie \nWynik: " << a - b << endl;
		else if (x == '*')
			cout << "Wybrano mnozenie \nWynik: " << a * b << endl;
		else if (x == '/')
		{
			if (b == 0)
				cout << "Nie mozna dzielic przez 0! \n";
			else
				cout << "Wybrano dzielenie \nWynik: " << a / b << endl;
		}
		else
			cout << "Blad wykonywania programu - sprawdz wprowadzone dane. \n";
		cout << "Czy chcesz powtorzyc obliczenia?\n y - TAK		n - NIE\n";
		cin >> c;
	}
}

/* 2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. 
Zakończyć program, kiedy liczba przekroczy 100 000. */
void solution23()
{
	cout << "Rozwiazanie zadania 2.3:\n";
	cout << "Podaj liczbe, zostana wyswietlone jej kolejne potegi do 100 000:\n";
	double x, temp;
	cin >> x;
	temp = x;
		
	if (x < -1 || x > 1)
	{
		int i = 1;
		while (x < 100000)
		{
			cout << "Potega n=" << i << " to: " << x << endl;
			x = x * temp;
			i++;
		}
		cout << "Zakres przekroczony.\n";
	}
	else
		cout << "Wprowadzono niepoprawna liczbe!\n";
}

/* 2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. 
Następnie należy wyświetlać kolejno (w nowej linii) wszystkie liczby mniejsze od x, 
aż osiągnięte zostanie 0. */
void solution24()
{
	cout << "Rozwiazanie zadania 2.4:\n";
	cout << "Program wyswietla liczby calkowite mniejsze od podanej az osiagnie 0.\n";
	cout << "Podaj liczbe dodatnia wieksza od 0:\n";
	int x;
	cin >> x;
	if (x > 0)
	{
		while (x > 0)
		{
			x = x - 1;
			cout << x << endl;
		}
	}
	else
		cout << "Wprowadzono niepoprawna liczbe!\n";
}

/* 2.5.Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji 
i przejścia do następnej, a druga natychmiast kończy pętlę. Przerobić program z zadania 1.4,
aby wyświetlał tylko parzyste liczby (użyć if oraz continue).
Jeśli liczba wynosi 40, należy wyjść z pętli i zakończyć program.

(1.4.Zapoznać się z instrukcjami warunkowymi(if, else if, else oraz switch).
Pobrać od używkownika liczbę i wyświetlić informację, czy jest ona : mniejsza,
większa, czy równa 0.) */
void solution25()
{
	cout << "Rozwiazanie zadania 2.5:\n";
	cout << "Program sprawdza czy podana liczba parzysta jest wieksza, mniejsza, czy rowna 0:\n";
	cout << "Wprowadzenie liczby 40 konczy dzialanie programu:\n";
	int x = 0;
	while (x != 40)
	{
		cout << "Podaj liczbe:\n";
		cin >> x;
		if (x == 0)
		{
			cout << "Podana liczba jest rowna 0 \n\n";
			continue;
		}
		else if (x > 0 && x%2 == 0)
		{
			cout << "Podana liczba jest wieksza od 0 \n\n";
			continue;
		}
		else if (x < 0 && x%2 == 0)
		{
			cout << "Podana liczba jest mniejsza od 0 \n\n";
			continue;
		}
	}
	cout << "Podana liczba jest rowna 40. Koncze dzialanie programu.\n";
}

/* 2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną 
ilość razy. Uwaga - każdą pętlę for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje 
zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest znana (zależy od użytkownika
lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ,
czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. 
Następnie OPERACJI WYKONYWANEJ PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1,
czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry od 0 do 9. */
void solution26()
{
	cout << "Rozwiazanie zadania 2.6:\n";
	cout << "Program wypisuje cyfry od 0 - 9\n";
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
}

/* 2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać).
Za pomocą pętli for wypisać liczby między x a y (do przemyślenia - co jest stanem początkowym, 
a co warunkiem zakończenia pętli?)*/
void solution27()
{
	cout << "Rozwiazanie zadania 2.7:\n";
	cout << "Program wypisuje liczby o jeden wieksze od wartosci MIN, do wartosci MAX:\n";
	double x, y, i;
	cout << "Wprowadz liczbe MIN:";
	cin >> x;
	cout << "Wprowadz liczbe MAX, wieksza od liczby MIN:";
	cin >> y;
	for (i = x+1; i < y; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}

/* 2.8. Pobrać od użytkownika liczbę x. 
Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.*/
void solution28()
{
	cout << "Rozwiazanie zadania 2.8:\n";
	cout << "Program wypisuje liczby o jeden mniejsze od podanej, ale wieksze niz 0:\n";
	cout << "Podaj liczbe:\n";
	double x, i;
	cin >> x;
	for (i = x-1; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;
}

/* 2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. 
Pętla powinna się zakończyć, jeśli liczba przekroczy 100. Uwaga - proszę nie używać operacji continue 
i break, a sterować tylko parametrami pętli.*/
void solution29()
{
	cout << "Rozwiazanie zadania 2.9:\n";
	cout << "Program wypisuje liczby o 3 wieksze od podanej do 100:\n";
	cout << "Podaj liczbe: ";
	double x, i;
	cin >> x;
	for (i = x+3; i < 100; i = i+3)
	{
		cout << i << " ";
	}
	cout << endl;
}

/* 3.1. Napisać metodę void NewLine(). Powinna ona wypisać na ekran pojedynczą pustą linię.
Użyć tej metodę w main().*/
void s31NewLine()
{
	cout << endl;
}

/* 3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, 
ile zostało podanych W PARAMETRZE count (należy użyć pętli for). Użyć metodę w main() */
void s32NewLines(int count)
{
	for (int i = 0; i < count; i++)
	{
		s31NewLine();
	}
}

/*3.3. Napisać metodę void WriteBiggerNumber(int x, int y). Metoda powinna pobrać 2 parametry
i zwrócić większy z nich. Wykorzystać funckję w metodzie main(). UWAGA - pobieranie liczb od 
użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber! 
Do funkcji należy jedynie przesłać pobrane wcześniej parametry.*/
void s33WriteBiggerNumber(int x, int y)
{
	if (x>y)
	{
		cout << "Liczba 1 jest wieksza: " << x << endl;
	}
	else
	{
		cout << "Liczba 2 jest wieksza: " << y << endl;
	}
}

/*3.4. Napisać metodę Multiply(int x, int y) . Metoda powinna ZWRÓCIĆ (słowo kluczowe return) 
iloczyn dwóch parametrów. Uwaga! Metoda NIE POWINNA wypisywać wyniku - 
powinien on być wyświetlony w funkcji main!*/
double s34Multiply(double x, double y)
{
	return x * y;
}

int main()
{
	solution11();
	solution12();
	solution13();
	solution14if();
	solution14switchIf1();
	solution14switchIf2();
	solution15();	
	solution16();
	solution21();
	solution22();
	solution23();	
	solution24();
	solution25();
	solution26();
	solution27();
	solution28();
	solution29();
	s31NewLine();
	s32NewLines(5);
	

	/* 3.3. void WriteBiggerNumber. */

	cout << "Rozwiazanie zadania 3.3:\n";
	cout << "Metoda void WriteBiggerNumber pobiera 2 wartosci i zwraca wieksza z nich.\n";
	cout << "Podaj 2 liczby calkowite:\n";
	int x, y;
	cin >> x >> y;
	s33WriteBiggerNumber(x, y);


	/* 3.4 Multiply */

	cout << "Rozwiazanie zadania 3.4:\n";
	cout << "Metoda Multiply pobiera 2 wartosci i zwraca ich iloczyn.\n";
	cout << "Podaj 2 liczby:\n";
	double x, y;
	cin >> x >> y;
	s34Multiply(x, y);
	double result = s34Multiply(x, y);
	cout << result << endl;
}