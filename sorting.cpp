#include <iostream>
#include <vector>

void bubbleSort (int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void selectionSort (std::vector<int>& vecArr) {
	int n = vecArr.size();
	
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		
		for (int j = i + 1; j < n; j++) {
			if (vecArr[j] < vecArr[minIndex]) {
				minIndex = j;
			}
			
		}
		if (minIndex != i) {
				std::swap(vecArr[i], vecArr[minIndex]);
		}
	}
}

void insertionSort (std::vector<int>& vecArr) {
	int n = vecArr.size();
	for (int i = 1; i < n; i++) {
		int key = vecArr[i];
		int j = i - 1;
		
		while (j >= 0 && vecArr[j] > key) {
			vecArr[j + 1] = vecArr[j];
			j--;
		}
		
		vecArr[j + 1] = key;
	}
}



void printArray (std::vector<int>& arr) {
	for (int value : arr) {
		std::cout << value << " ";
	}
}

int main() {
	
	int num;
	std::vector<int> numarr = {3, 4, 5, 1, 2};
	
	std::cout << "Original Array: ";
	printArray(numarr);
	
	std::cout << std::endl;
	
	std::cout << "Sorted Array using insertion Sort: ";
	
	insertionSort(numarr);
	printArray(numarr);
	
	
}