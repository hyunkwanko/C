#ifndef  PRIORITY_QUEUE
#define  PRIORITY_QUEUE

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void Min_Heapify(double *A, int i, int heap_size);
void array_swap(double *A, int a, int b);
void Build_Heap(double *A, int length);
void Min_heap_Insert(double *A, double key);
int Extract_Min(double *A);
int heap_size = 0;

#endif