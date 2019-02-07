#include "pch.h"
#include "stdio.h"
#include <iostream>

using namespace std;

/*1.1. Utworzyć 5 - cio elementową tablicę typu int. Pobrać od użytkownika 5 elementów i dodać je do 
tablicy. Następnie wyświetlić największą liczbę z tablicy(algorytm do samodzielnej implementacji).*/
void solution11()
{
	cout << "Rozwiazanie zadania 1.1:" << endl;
	cout << "Program pobiera 5 liczb i wyswietla najwieksza z nich." << endl;
	int tab[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}

	int max = tab[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < tab[i])
		{
			max = tab[i];
		}
	}
	cout << "Najwiekszy element tablicy to: " << max << endl;
}

//1.2. Wyświetlić w pętli tablice z zadania 1.1 od początku i od końca (dwie pętle).
void solution12()
{
	cout << "Rozwiazanie zadania 1.2:" << endl;
	cout << "Program pobiera 5 liczb i wyswietla je dwukrotnie - od poczatku i od konca" << endl;
	
	int tab[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << tab[i] << "\t";
	}
	cout << endl;

	for (int i = 4; i >= 0; i--)
	{
		cout << tab[i] << "\t";
	}
	cout << endl;
}

//1.3 Napisać algorytm sprawdzający, czy tablica jest posortowana w kolejności niemalejącej.
void solution13()
{
	cout << "Rozwiazanie zadania 1.3:" << endl;
	cout << "Program sprawdza czy tablica jest posortowana." << endl;

	int tab[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}

	int isSorted = 1;
	for (int i = 0; i < 4; i++)
	{
		if (tab[i] > tab[i + 1])
		{
			isSorted = 0;
			break;
		}
	}

	if (isSorted)
	{
		cout << "Tablica jest posortowana niemalejaco" << endl;
	}
	else
	{
		cout << "Tablica NIE jest posortowana" << endl;
	}
}

bool IsSorted(int *a, int size)
{
	int isSorted = 1;
	for (int i = 0; i < size - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			isSorted = 0;
			break;
		}
	}
	return isSorted;
}

//2.1. Utworzyć osobną metodę bool IsSorted(int *, int) realizującą zadanie 1.3.
void solution21()
{
	cout << "Rozwiazanie zadania 2.1:" << endl;
	cout << "Metoda bool IsSorted sprawdza czy tablica jest posortowana." << endl;

	int tab[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}

	bool isSorted = IsSorted(tab, 5);

	if (isSorted)
	{
		cout << "Tablica jest posortowana niemalejaco" << endl;
	}
	else
	{
		cout << "Tablica NIE jest posortowana" << endl;
	}
}

void printBackwards(int *a, int s)
{
	for (int i = s - 1; i >= 0; i--)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

}

//2.2. Utworzyć metodę void printBackwards(int *a, int s) służącą do wypisania tablicy OD KOŃCA.
void solution22()
{
	cout << "Rozwiazanie zadania 2.2:" << endl;
	cout << "Program wypisuje tablice od konca." << endl;

	int tab[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}

	printBackwards(tab, 5);
}

void printDots(int *a, int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			cout << ".";
		}
		cout << endl;
	}
}

/* 2.3. Utworzyć metodę prontDots(int *a, int s) wyświetlającą w nowych linijkach tyle kropek,
ile znajduje się w danym elemencie tablicy. */
void solution23()
{
	cout << "Rozwiazanie zadania 2.3:" << endl;
	cout << "Program wypisuje kropki zaleznie od ilosci w tablicy." << endl;

	int tab[] = { 3,2,5,4 };
	printDots(tab, 4);

}

int Sum(int *a, int s)
{
	int sum = 0;
	for (int i = 0; i < s; i++)
	{
		sum = sum + a[i];
	}
	return sum;
}

//2.4. Utworzyć metodę int Sum(int *a int s) liczącą sumę elementów tablicy.
void solution24()
{
	cout << "Rozwiazanie zadania 2.4:" << endl;
	cout << "Metoda int Sum oblicza sume elementow tablicy." << endl;


	int tab[] = { 3,2,5,4 };

	int sum = Sum(tab, 4);

	cout << "Suma: " << sum << endl;
}

void bubbleSort(int *a, int s)
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
}

void printArray(int *a, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

/*2.5. Zaimplementować algorytm sortowania bąbelkowego. 
Algorytm powinien posortować dowolnie dużą tablicę w kolejności niemajlejącej.*/
void solution25()
{
	cout << "Rozwiazanie zadania 2.5:" << endl;
	cout << "Program sortuje tablice poprzez algorytm sortowania babelkowego." << endl;

	int tab[] = { 12, 10, 8, 11, 7, 9, 6 };
	printArray(tab, 7);

	bubbleSort(tab, 7);
	printArray(tab, 7);
}

int getLength(char *str)
{
	int length = 0;
	char currentChar = str[length];
	while (currentChar != '\0')
	{
		length = length + 1;
		currentChar = str[length];
	}
	return length;
}

//3.1. Napisać metodę int getLenght (char *str), w której przeliczony zostanie rozmiar łańcucha.
void solution31()
{
	cout << "Rozwiazanie zadania 3.1:" << endl;
	cout << "Program liczy rozmiar lancucha." << endl;

	char str[] = "Hello!";
	int length = getLength(str);

	cout << "Rozmiar stringa: " << length << endl;
}

void Reverse(char *str)
{
	int length = getLength(str);
	for (int i = length - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;
}

//3.2. Napisać metodę void Reverse (char *str), która wypisze łańcuch znaków od końca.
void solution32()
{
	cout << "Rozwiazanie zadania 3.2:" << endl;
	cout << "Metoda void Reverse wypisuje lancuch znakow od konca." << endl;

	char str[] = "Hello!";
	Reverse(str);
}

bool containsDigits(char *str)
{
	int i = 0;
	bool isDigit = false;
	while (str[i] != '\0' && !isDigit)
	{
		i++;
		switch (str[i])
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			isDigit = true;
			break;
		default:
			isDigit = false;
			break;
		}
	}
	return isDigit;
}

/* 3.3. Napisać metodę bool containsDigits (char *str), która zwróci informację, 
czy w danym stringu znajduje się jakakolwiek cyfra. */
void solution33()
{
	cout << "Rozwiazanie zadania 3.3:" << endl;
	cout << "Program sprawdza czy w danym stringu znajduje sie jakakolwiek cyfra." << endl;

	char str1[] = "asdfgzxcv";
	bool result1 = containsDigits(str1);

	cout << "Powinno byc false a jest: " << result1 << endl;

	char str2[] = "asdfg4zxcv";
	bool result2 = containsDigits(str2);
	cout << "Powinno byc true a jest " << result2 << endl;
}

//3.4. Pobrać od użytkownika łańcuch znaków. Przekazać go do każdej z metod z 3. części zadań.
void solution34()
{
	cout << "Rozwiazanie zadania 3.4:" << endl;
	cout << "Program pobiera lancuch znakow i przekazuje go do wczesniejszych metod." << endl;

	cout << "Podaj lancuch znakow: ";
	char str[1024];
	cin >> str;

	cout << "Wprowadzony lancuch znakow: " << str << endl;
	cout << "Dlugosc: " << getLength(str) << endl;
	cout << "Po odwroceniu: ";
	Reverse(str);

	if (containsDigits(str))
	{
		cout << "Lancuch zawiera cyfry!" << endl;
	}
	else
	{
		cout << "Lancuch nie zawiera cyfr!" << endl;
	}
}

/*4.1. Pobrać od użytkownika liczbę n. Zaalokować pamięć na n elementów int i pobrać je od użytkownika.
Wykonać na niej metodę prontBackwards z 2.2.*/
void solution41()
{
	cout << "Rozwiazanie zadania 4.1:" << endl;
	cout << "Podaj liczbe elementow: ";
	int n;
	cin >> n;

	int *tab;
	tab = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		cout << "Podaj element " << i + 1 << ": ";
		cin >> tab[i];
	}

	printBackwards(tab, n);

	free(tab);
}

/*4.2. Pobrać od użytkownika liczbę n. Zaalokować pamięć na n elementów int i pobrać je od użytkownika.
Następnie zaalokować pamięć i utworzyć tablicę, w której będą tylko UJEMNE wartości z pierwszej tablicy.
Na koniec zwolnić obie tablice.*/
void solution42()
{
	cout << "Rozwiazanie zadania 4.2:" << endl;
	cout << "Podaj liczbe elementow: ";
	int n;
	cin >> n;

	int *tab;
	tab = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		cout << "Podaj element " << i + 1 << ": ";
		cin >> tab[i];
	}


	int resultSize = 0;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] < 0)
		{
			resultSize = resultSize + 1;
		}
	}

	int *result;
	result = (int *)malloc(sizeof(int) * resultSize);

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] < 0)
		{
			result[j++] = tab[i];
		}
	}

	cout << "Wprowadzona tablica: ";
	printArray(tab, n);
	cout << "Tablica liczb ujemnych: ";
	printArray(result, resultSize);

	free(tab);
	free(result);
}

bool AreArraysIdentical(int *a1, int s1, int *a2, int s2)
{
	bool areIdentical = false;
	if (s1 == s2)
	{
		for (int i = 0; i < s1; i++)
		{
			if (a1[i] != a2[i])
			{
				break;
			}
		}
	}
	return areIdentical;
}

/* 4.3. Napisać metodę bool AreArraysIdentical(int * a1, int s1, int * a2, int s2) zwracającą informację,
czy dwie tablice są identyczne. */
void solution43()
{
	cout << "Rozwiazanie zadania 4.3:" << endl;
}

char * reverseString(char s[])
{
	int length = getLength(s);
	char * result = (char *)malloc(sizeof(char) * (length + 1));

	for (int i = 0; i < length; i++)
	{
		result[length - i - 1] = s[i];
	}

	result[length] = '\0';
	return result;
}

/*4.4. Napisać metodę char * reverseString(char*s), która ZWRÓCI string, który jest odwróconym 
stringiem przekazanym jako pierwszy parametr, Funkcja zaalokuje pamięć na nowy łańcuch i go zwróci.*/
void solution44()
{
	cout << "Rozwiazanie zadania 4.4:" << endl;

	char str[] = "Ala ma kota!";
	char * reversed = reverseString(str);
	
	cout << "String w programie: " << str << endl;
	cout << "Odwrocony string: " << reversed << endl;

	free(reversed);
}
int main()
{
	//solution11();
	//solution12();
	//solution13();
	//solution21();
	//solution22();
	//solution23();
	//solution24();
	//solution25();
	//solution31();
	//solution32();
	//solution33();
	//solution34();
	//solution41();
	//solution42();
	//solution43();
	//solution44();
}
