#ifndef SORTING_ANALYSIS__SORTING_HPP__
#define SORTING_ANALYSIS__SORTING_HPP__

#include <vector>
#include <string>

class Sorting
{
  public:
    Sorting(const std::string & name);
    void generate_data(int size);
    virtual void sort();

  protected:
    double time;
    std::string algorithm_name;
    std::vector<int> unordered_data;
    std::vector<int> ordered_data;
};

#endif
