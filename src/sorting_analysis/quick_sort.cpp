#include "sorting_analysis/quick_sort.hpp"

void QuickSort::sort() 
{
  quick_sort(0, data.size() - 1);
}

void QuickSort::quick_sort(int low, int high) 
{
  if (low < high) {
    int pi = partition(low, high);

    quick_sort(low, pi-1);
    quick_sort(pi+1, high);
  }
}

int QuickSort::partition(int low, int high)
{
  int pivot = data[high];

  int i = low - 1;

  for (int j = low; j <= high; j++) {
    if (data[j] < pivot) {
      i++;
      std::swap(data[i], data[j]);
    }
  }

  std::swap(data[i+1], data[high]);
  
  return i + 1;
}
