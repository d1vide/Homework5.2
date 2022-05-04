#include "Header.h"

int* memoryToArray(int* first, int n) {
	first = new int[n];
	return first;
}

void fillArray(int* first, int n) {
	for (int i = 0; i < n; i++) {
		first[i] = rand() % 100;
	}
}

void printArray(int* first, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << first[i] << " ";
	}
	std::cout << "\n";
}

void memoryDelete(int* first) {
	delete[] first;

}

void myswap(int* first, int n) {
	int buffer;
	for (int i = 1; i < n; i += 2) {
		buffer = first[i];
		first[i] = first[i - 1];
		first[i - 1] = buffer;
	}
}