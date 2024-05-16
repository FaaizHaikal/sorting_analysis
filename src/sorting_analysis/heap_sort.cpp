#include "sorting_analysis/heap_sort.hpp"

void HeapSort::sort() {
  int n = data.size();

  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(n, i);
  }

  for (int i = n - 1; i >= 0; i--) {
    std::swap(data[0], data[i]);
    heapify(i, 0);
  }
}

void HeapSort::heapify(int n, int i) {
  int largest = i;

  int left = 2*i + 1;
  int right = 2*i + 2;

  if (left < n && data[left] > data[largest]) {
    largest = left;
  }

  if (right < n && data[right] > data[largest]) {
    largest = right;
  }

  if (largest != i) {
    std::swap(data[i], data[largest]);
    heapify(n, largest);
  }
}
