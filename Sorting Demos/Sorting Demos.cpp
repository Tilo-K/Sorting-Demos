#include <iostream>
#include "Sorter.h"

void printArray(int array[], int length);

int main()
{
    std::cout << "Sorting Demo's by Tilo-K\n"; 

	Sorter sort = Sorter();

	int test[10] = {2, 5, 6, 7, 9, 1, 7, 0, 12, 8};

	std::cout << "-----BubbleSort-----\n";
	printArray(test, 10);
	printArray(sort.bubbleSort(test, 10), 10);

	return 0;
}

void printArray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		std::cout << array[i] << ", ";
	}

	std::cout << std::endl;
}