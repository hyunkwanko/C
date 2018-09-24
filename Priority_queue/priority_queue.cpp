#include "priority_queue.h"

void Min_heap_Insert(double *A, double key) {
	heap_size += 1;
	A[heap_size] = key;
	int i = heap_size; //������ ����� �ε���
	int parent = i / 2; //������ ����� �θ� �ε���
	while (i > 1 && A[parent] > A[i]) {
		array_swap(A, parent, i);
		i = parent;
	}

	Build_Heap(A, heap_size);
}

int Extract_Min(double *A) {
	if (heap_size < 1) {
		printf("���� �������� �ʽ��ϴ�.\n");
		return 0;
	}
	int min = A[1];
	A[1] = A[heap_size];
	heap_size -= 1;
	Min_Heapify(A, 1, heap_size);

	return min;
}

void Build_Heap(double *A, int heap_size) {
	for (int i = heap_size / 2; i >= 1; i--) //������ ����� �θ�
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

	if (left > heap_size) //A[i]�� �ڽ��� ������ ���� �ʴ�.
		return;
	/*�ڽĵ� �� ���� index ã��*/
	if (right > heap_size) { //�ڽ��� ���ʹۿ� ����.
		if (A[left] < A[i])
			smallest = left;
		else
			smallest = i;
	}
	else { //�ڽ��� �� �� ����
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

	if (A[i] <= A[smallest]) //�̹� ���� ���ٸ� return
		return;
	else {
		array_swap(A, i, smallest);
		Min_Heapify(A, smallest, heap_size);
	}
}
