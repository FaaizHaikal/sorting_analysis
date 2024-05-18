#include "sorting_analysis/insertion_sort.hpp"

void InsertionSort::sort() {
    int n = data.size();

    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;
        
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}
