#ifndef SORTING_ANALYSIS__SORTING_HPP__
#define SORTING_ANALYSIS__SORTING_HPP__

#include <vector>
#include <string>

class Sorting
{
  public:
    Sorting(const std::string & name);
    virtual ~Sorting() = default;
    static void generate_data(std::vector<int> & data, int size);
    void swap(int & a, int & b);
    void start();
    void set_data(const std::vector<int> data_);
    void print_data();
    virtual void sort() = 0;

  protected:
    double time;
    std::string algorithm_name;
    std::vector<int> data;
};

#endif
