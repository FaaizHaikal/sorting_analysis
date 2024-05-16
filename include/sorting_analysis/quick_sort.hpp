#ifndef SORTING_ANALYSIS__QUICK_SORT_HPP_
#define SORTING_ANALYSIS__QUICK_SORT_HPP_

#include "sorting_analysis/sorting.hpp"

class QuickSort : public Sorting {
  public:
    QuickSort() : Sorting("Quick Sort") {};
    void sort() override;
  
  private:
    void quick_sort(int low, int high);
    int partition(int low, int high);
};

#endif