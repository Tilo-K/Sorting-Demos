#include "Sorter.h"

Sorter::Sorter()
{
}

Sorter::~Sorter()
{
}

int* Sorter::bubbleSort(int toSort[], int length)
{
	for (int i = 0; i < length; i++) {
		for (int x = 0; x < length-1; x++) {
			if (toSort[x] > toSort[x + 1]) {
				int tmp = toSort[x];
				toSort[x] = toSort[x+1];
				toSort[x + 1] = tmp;
			}
		}
	}

	return toSort;
}