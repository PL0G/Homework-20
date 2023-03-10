#include <iostream>
#include <cstdlib>
#include <ctime>
void show_arr(int arr[], const int length) {
	std::cout<< "Array:\n[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
int search_index(int arr[], const int length, int num, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == num)
			return i;
	return-1;
}
int search_last_index(int arr[], const int length, int num) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == num)
			return i;
	return -1;
}
int search_last_index(int arr[], const int length, int num,int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == num)
			return i;
	return -1;
}
int arr_min(int arr[], const int length) {
	int min = arr[0];
	for (int i = 1; i < length; i++)
		min = min < arr[i] ? min : arr[i];
	return min;
}
int arr_max(int arr[], const int length) {
	int max = arr[0];
	for (int i = 1; i < length; i++)
		max = max > arr[i] ? max : arr[i];
	return max;
}
int mean_value(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum / length;
}
void range(int arr[], const int length, int A, int B) {
	std::cout << "\nArray elements higher than " << A << " and lower than " << B << " :\n";
	for (int i = 0; i < length; i++)
		if (arr[i] > A && arr[i] < B)
			std::cout << arr[i] << ", ";
	std::cout << "\b\b\n";
}
int counter(int arr[], const int length, int num) {
	int count=0;
	for (int i = 0; i < length; i++)
		if (arr[i] == num)
			count++;
	return count;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int length = 100;
	int arr[length];
	srand(time(NULL));
	
	for (int i = 0; i < length; i++) 
		arr[i] = rand() % (101 + 100) - 100;
	show_arr(arr, length);
	std::cout << "\n\nsearch " << search_index(arr, length, 20);
	std::cout << "\n\nlast search " << search_last_index(arr, length, 18);
	std::cout << "\n\nmin " << arr_min(arr, length);
	std::cout << "\n\nmax " << arr_max(arr, length);
	std::cout << "\n\nmean " << mean_value(arr, length);
	range(arr, length, -25, 25);
	std::cout << "\n\ncounter " << counter(arr, length, 15);







	return 0;
}