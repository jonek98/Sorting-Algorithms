#include "Log.h"
#include <iostream>

//function to display an array
void Log(int* arrPtr, int arrSize) {			
	for (int u = 0; u < arrSize; ++u) {
		std::cout << (*arrPtr++) << " ";
	}
	std::cout << std::endl;
}