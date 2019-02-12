#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include<string>

using namespace std;

struct Student
{
	int Age;
	int Height;
	int Semester;
};

Student* Create(int age, int height, int semestr)
{
	Student *student = (Student*)malloc(sizeof(Student));
	student->Age = age;
	student->Height = height;
	student->Semester = semestr;
	return student;
}

void PrintStudent(Student* student)
{
	printf(
		"Wiek: %d, Wzrost: %d ,Semestr: %d\n",
		student->Age,
		student->Height,
		student->Semester
	);
}

bool AreEquals(Student* s1, Student* s2)
{
	return s1 && s2 &&
		(s1->Age == s2->Age) &&
		(s1->Height == s2->Height) &&
		(s1->Semester == s2->Semester);
}

//Zad. 1.1. Utworzyć strukturę Student, napisać metody void PrintStudent oraz bool AreEqual
void zadanie11()
{
	Student *student = Create(12, 128, 1);
	PrintStudent(student);

	Student *s1 = Create(12, 128, 1);
	Student *s2 = Create(14, 128, 1);

	printf("Równi? : %s\n", AreEquals(s1, s2) ? "true" : "false");

	printf("Równi? : %s\n", AreEquals(s1, student) ? "true" : "false");

	free(student);
	free(s1);
	free(s2);
}

//Zad. 1.2. Utworzyć tablicę 3 studentów. Zapełnić wartościmi, wyświetlić, zwolnić pamięć (malloc).
void zadanie12()
{
	Student** tab = (Student**)malloc(sizeof(Student) * 3);

	tab[0] = Create(12, 128, 1);
	tab[1] = Create(15, 158, 3);
	tab[2] = Create(18, 188, 5);

	for (int i = 0; i < 3; i++)
	{
		PrintStudent(tab[i]);
	}

	free(tab);
}

struct Node
{
	int Value;
	Node* Next;
};

Node* Create(int value)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->Value = value;
	n->Next = n;
}

Node* GetTail(Node* root)
{
	return root->Next;
}

Node* GetLast(Node* root)
{
	Node* temp = root;
	while (temp->Next != root)
	{
		temp = temp->Next;
	}
	return temp;
}

void Add(Node* root, int value)
{
	Node* newNode = Create(value);
	Node* last = GetLast(root);
	last->Next = newNode;
	newNode->Next = root;
}

void PrintList(Node* root)
{
	Node* temp = root;
	do
	{
		printf("%d\t", temp->Value);
		temp = temp->Next;
	} while (temp != root);
	cout << endl;
}

void RemoveNode(Node* root, int value)
{
	// Co jeśli list ma jeden element ?
	Node* prev = GetLast(root);
	Node* temp = root;
	bool exists = false;
	do {
		if (temp->Value == value)
		{
			prev->Next = temp->Next;
			free(temp);
			temp = prev->Next;
		}
		else {
			prev = temp;
			temp = temp->Next;
		}
	} while (temp != root);
}

void FreeList(Node* root)
{
	Node* temp = root;
	do
	{
		Node* toRemove = temp;
		temp = temp->Next;
		free(toRemove);
	} while (temp != root);
	cout << endl;
}

int Count(Node *root)
{
	Node* temp = root;
	int count = 0;
	do
	{
		count++;
		temp = temp->Next;
	} while (temp != root);
	return count;
}

//Listy Zad. 1. Zaimplementować cykliczną listę jednokierunkową, ze strukturami węzła.
void listyZadanie1()
{
	Node* root = Create(2);
	PrintList(root);

	Add(root, 4);
	Add(root, 8);
	Add(root, 16);
	PrintList(root);

	Add(root, 20);
	PrintList(root);

	printf("Ostatnia wartość %d\n", GetLast(root)->Value);

	Add(root, 16);
	PrintList(root);
	printf("%d\n", Count(root));

	RemoveNode(root, 8);
	PrintList(root);
	RemoveNode(root, 10);
	PrintList(root);
	RemoveNode(root, 16);
	PrintList(root);

	printf("%d\n", Count(root));

	FreeList(root);
}

/* Zad. 3.1. Wczytywać od użytkownika liczby, aż nie poda on 0. 
Wszystkie wczytane liczby zapisać do pliku numbers.txt */
void zadanie31()
{
	int userNumber;
	ofstream numbersFile;
	numbersFile.open("numbers.txt");
	do
	{
		cout << "Podaj liczbę: ";
		cin >> userNumber;
		cout << "Użytkownik podał " << userNumber << endl;
		numbersFile << userNumber << endl;
	} while (userNumber != 0);
	numbersFile.close();
}

/* Zad. 3.2. Wczytać z numbers.txt liczby. Utworzyć listę jednokierunkową zawierającą te liczby, 
wypisać je na ekran. */
void zadanie32()
{
	fstream numbersFile("numbers.txt", ios_base::in);
	if (numbersFile.is_open())
	{
		cout << "File opened\n";
		string line;
		Node* numbers;
		bool init = false;
		while (getline(numbersFile, line)) {
			if (!init) {
				numbers = Create(atoi(line.c_str()));
				init = true;
			}
			else {
				Add(numbers, atoi(line.c_str()));
			}
		}
		numbersFile.close();
		PrintList(numbers);
	}

}

int main()
{
	zadanie11();
	zadanie12();
	listyZadanie1();
	zadanie31();
	zadanie32();

}