#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// CLASS WORK
	/*fstream inout("Text.txt", ios::in | ios::out | ios::app);

	char buffer[100];
	cin.getline(buffer, 100);
	inout << buffer << endl;

	inout.seekg(0, ios::beg);

	char readbuffer[100];
	while (!inout.eof()) {
		inout.getline(readbuffer, 100);
		cout << readbuffer;
	}

	inout.close();*/


	// HOMEWORK
	ifstream read("Text.txt");
	char buffer[100];

	// КІЛЬКІСТЬ РЯДКІВ
	int linecount = 0;
	while (!read.eof()) {
		read.getline(buffer, 100);
		linecount++;
	}

	// повернути курсор на початок
	read.seekg(0, ios::beg);

	// КІЛЬКІСТЬ СЛІВ
	int wordcount = 0;
	while (!read.eof()) {
		read >> buffer; // записує в буфер по словах
		wordcount++;
	}

	cout << "Linecount: " << linecount << "\nWordcount: " << wordcount;
	return 0;
}