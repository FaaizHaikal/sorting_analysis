#ifndef SORTING_ANALYSIS__COUNTING_SORT_HPP_
#define SORTING_ANALYSIS__COUNTING_SORT_HPP_

#include "sorting_analysis/sorting.hpp"

class CountingSort : public Sorting {
  public:
      CountingSort() : Sorting("Counting Sort") {};
      void sort() override;
};

#endif