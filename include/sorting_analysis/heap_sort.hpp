#ifndef SORTING_ANALYSIS__HEAP_SORT_HPP_
#define SORTING_ANALYSIS__HEAP_SORT_HPP_

#include "sorting_analysis/sorting.hpp"

class HeapSort : public Sorting {
  public:
      HeapSort() : Sorting("Heap Sort") {};
      void sort() override;
};

#endif