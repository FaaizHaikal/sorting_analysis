#ifndef SORTING_ANALYSIS__MERGE_SORT_HPP_
#define SORTING_ANALYSIS__MERGE_SORT_HPP_

#include "sorting_analysis/sorting.hpp"

class MergeSort : public Sorting {
  public:
      MergeSort() : Sorting("Merge Sort") {};
      void sort() override;
};

#endif