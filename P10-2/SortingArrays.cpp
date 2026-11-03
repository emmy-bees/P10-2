//Introductory Programming, Lab 10 -- Emerson Beesley -- October 29, 2026
#include <cmath>
#include <iostream>
using namespace std;

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main() {
	int array[] = { 4, 3, 8, 6, 7};
	int arraySize = 5;
	if ((isSortedIncreasing(array, arraySize)) == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cout << endl;

	if ((isSortedDecreasing(array, arraySize)) == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cout << endl;

	if ((hasAdjacentDuplicates(array, arraySize)) == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	cout << endl;

	if ((hasDuplicates(array, arraySize)) == true) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}

bool isSortedIncreasing(int values[], int size) {
	int notSorted = 0;
	for (int i = 0; i + 1 < size; i++) {
		cout << "is " << values[i] << " <= " << values[(i + 1)] << "?" << endl;
		if (!(values[i] <= values[(i + 1)])) {
			notSorted++;
		}
	}
	if (notSorted > 0) {
		return false;
	}
	else {
		return true;
	}
}

bool isSortedDecreasing(int values[], int size) {
	int notSorted = 0;
	for (int i = 0; i + 1 < size; i++) {
		cout << "is " << values[i] << " >= " << values[(i + 1)] << "?" << endl;
		if (!(values[i] >= values[(i + 1)])) {
			notSorted++;
		}
	}
	if (notSorted > 0) {
		return false;
	}
	else {
		return true;
	}
}

bool hasAdjacentDuplicates(int values[], int size) {
	int duplicated = 0;
	for (int i = 0; i + 1 < size; i++) {
		if (values[i] == values[(i + 1)]) {
			duplicated++;
		}
	}
	if (duplicated > 0) {
		return true;
	}
	else {
		return false;
	}
}

bool hasDuplicates(int values[], int size) {
	int duplicate = 0;
	for (int j = 0; j < size; j++) {

		for (int i = (j+1); i < (size); i++) {
			cout << values[i] << " = " << values[j] << endl;
			if (values[i] == values[j]) {
				duplicate++;
			}
		}

	}
	if (duplicate > 0) {
		return true;
	}
	else {
		return false;
	}
}