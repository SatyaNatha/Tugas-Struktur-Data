#include <iostream>
using namespace std;

//Fungsi untuk menukarkan variable
void swap (int &x, int &y){
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

//Fungsi pivot pada quicksort
int partisi(int arr[], int low, int high){
	int pivot = arr[(low + high)/2];
	int i = low;
	int j = high;
	
	while (i<=j){
		while (arr[i] < pivot){
			i++;
		}
		while (arr[j] > pivot){
			j--;
		}
		if (i <= j){
			swap (arr[i], arr[j]);
			i++; j--;
		}
	}
	return i;
}

//Fungsi Quicksort
void quicksort(int arr[], int low, int high){
	if (low < high){
		int pi = partisi(arr, low, high);
		quicksort(arr, low, pi-1);
		quicksort(arr, pi, high);;
	}
}

int main(){
	//Deklarasi untuk input pengguna
	int n;
	cout << "Masukkan banyak bilangan : ";
	cin >> n;
	
	//Pengguna menginput data
	int arr[n];
	cout << "Masukkan "<<  n << " angka : \n";
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	//Penampilan bilangan sebelum diurutkan
	cout << "Angka sebelum diurutkan : " << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	quicksort(arr, 0, n - 1);
	
	//Penampilan bilangan setelah diurutkan
	cout << "Angka setelah diurutkan : " << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";	
	}
	cout << endl;
	
	return 0;
}