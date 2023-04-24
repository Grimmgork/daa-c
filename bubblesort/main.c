#include <stdio.h>

int main(int argc, char *argv[]) {
	int arr[5] = {3, 9, 1, 6, 2};
	while(!sort(5, &arr)){ } //call bubblesort until sorted
	
	int i; // print sorted array
	for(i = 0; i<5; i++){ printf("%i ",arr[i]); }
	printf("\n");
	return 0;
}

int sort(int l, int *arr) {
	int sorted = 1;
	int i;
	for(i = 0; i < l-1; i++){
		if(arr[i] > arr[i+1]){
			int s = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = s;
			sorted = 0;
		}
	}
	return sorted;
}