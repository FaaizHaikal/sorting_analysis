#ifndef SORTING_ANALYSIS__INSERTION_SORT_HPP_
#define SORTING_ANALYSIS__INSERTION_SORT_HPP_

#include "sorting_analysis/sorting.hpp"

class InsertionSort : public Sorting {
  public:
      InsertionSort() : Sorting("Insertion Sort") {};
      void sort() override;
};

#endif