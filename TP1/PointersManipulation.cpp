#include "PointersManipulation.h"

void Increment1(int n){
	n++;
}

//use pointer
void Increment2(int* n){
	(*n)++;
}

//pass by reference
void Increment3(int& n){
	n++;
}