#ifndef SORTING_ANALYSIS__MERGE_SORT_HPP_
#define SORTING_ANALYSIS__MERGE_SORT_HPP_

#include "sorting_analysis/sorting.hpp"
#include <vector>

class MergeSort : public Sorting {
  public:
      MergeSort() : Sorting("Merge Sort") {};
      void sort() override;

  private:
      void merge_sort(std::vector<int>& arr, int left, int right);
      void merge(std::vector<int>& arr, int left, int mid, int right);
};

#endif
