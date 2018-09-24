#include "priority_queue.h"

void Min_heap_Insert(double *A, double key) {
	heap_size += 1;
	A[heap_size] = key;
	int i = heap_size; //문제아 노드의 인덱스
	int parent = i / 2; //문제아 노드의 부모 인덱스
	while (i > 1 && A[parent] > A[i]) {
		array_swap(A, parent, i);
		i = parent;
	}

	Build_Heap(A, heap_size);
}

int Extract_Min(double *A) {
	if (heap_size < 1) {
		printf("힙이 존재하지 않습니다.\n");
		return 0;
	}
	int min = A[1];
	A[1] = A[heap_size];
	heap_size -= 1;
	Min_Heapify(A, 1, heap_size);

	return min;
}

void Build_Heap(double *A, int heap_size) {
	for (int i = heap_size / 2; i >= 1; i--) //마지막 노드의 부모
		Min_Heapify(A, i, heap_size);
}

void array_swap(double *A, int a, int b) {
	int temp; temp = A[a];
	A[a] = A[b];
	A[b] = temp;
}

void Min_Heapify(double *A, int i, int heap_size) {
	int left, right, smallest;
	left = 2 * i;
	right = 2 * i + 1;

	if (left > heap_size) //A[i]가 자식을 가지고 있지 않다.
		return;
	/*자식들 중 작은 index 찾기*/
	if (right > heap_size) { //자식이 왼쪽밖에 없다.
		if (A[left] < A[i])
			smallest = left;
		else
			smallest = i;
	}
	else { //자식이 둘 다 존재
		if (A[left] < A[right]) {
			if (A[left] < A[i])
				smallest = left;
			else
				smallest = i;
		}
		else {
			if (A[right] < A[i])
				smallest = right;
			else
				smallest = i;
		}
	}

	if (A[i] <= A[smallest]) //이미 가장 낮다면 return
		return;
	else {
		array_swap(A, i, smallest);
		Min_Heapify(A, smallest, heap_size);
	}
}
