#include "Header.h"

int main() {
	setlocale(0, "");
	int* array = new int;
	int n = 12;
	array = memoryToArray(array, n);
	fillArray(array, n);
	printArray(array, n);
	myswap(array, n);
	std::cout << "Массив в котором значения четных и нечетных элементов поменяли местами: \n";
	printArray(array, n);
	memoryDelete(array);
}