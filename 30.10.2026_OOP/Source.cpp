#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream read("Text.txt");
	char buffer[100];

	// КІЛЬКІСТЬ РЯДКІВ
	int lineCount = 0;
	while (!read.eof()) {
		read.getline(buffer, 100);
		lineCount++;
	}

	read.seekg(0, ios::beg);

	// КІЛЬКІСТЬ СЛІВ
	int wordCount = 0;
	while (!read.eof()) {
		read >> buffer; // записує в буфер по словах
		wordCount++;
	}

	read.seekg(0, ios::beg);

	// КІЛЬКІСТЬ ЗАБОРОНЕНИХ СЛІВ
	const int N = 2;
	string forbiddenArr[N]{ "Cat","cat" };
	int forbiddenCount = 0;
	while (!read.eof()) {
		read >> buffer;
		for (int i = 0;i < N;i++) {
			if (buffer == forbiddenArr[i]) {
				forbiddenCount++;
			}
		}
	}

	cout << "LineCount: " << lineCount << "\nWordCount: " << wordCount << "\nForbiddenCount: " << forbiddenCount;
	return 0;
}