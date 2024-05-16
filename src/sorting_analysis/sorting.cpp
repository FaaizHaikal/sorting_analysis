#include "sorting_analysis/sorting.hpp"

Sorting::Sorting(const std::string & name)
: time(0.0), algorithm_name(name)
{
}

void Sorting::generate_data(int size)
{
  unordered_data.clear();
  
  for (int i = 0; i < size; i++)
  {
    unordered_data.push_back(rand() % size);
  }
}
