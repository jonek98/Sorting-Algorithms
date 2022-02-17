#include "swap.h"

		//swapping two elements in an array
void swap(int* arrPtr, int firstEl, int secondEl) {		
	if (firstEl != secondEl) {							
		int buffer = arrPtr[firstEl];
		arrPtr[firstEl] = arrPtr[secondEl];
		arrPtr[secondEl] = buffer;
	}
}