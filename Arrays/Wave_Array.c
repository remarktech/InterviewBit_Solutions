// Please visit this link for question https://www.interviewbit.com/problems/wave-array/
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *A, int start, int end) {
    int pivot = A[end];
    int index = start;
    int i;
    for(i = index; i < end; i ++) {
        if(A[i] < pivot) {
            swap(&A[i],&A[index]);
            index ++;
        }
    }
    swap(&A[index],&A[end]);
    return index;
}

void quickSort(int *A, int start, int end) {
    if(start < end) {
        int index = partition(A, start, end);
        quickSort(A, start, index - 1);
        quickSort(A, index + 1, end);
    }
}

int* wave(int* A, int n1, int *len1) {
    quickSort(A, 0, n1 -1);
    int i;
    for(i = 0; i < n1 -1; i += 2)
        swap(&A[i], &A[i+1]);

    *len1 = n1;
    return A;
}
