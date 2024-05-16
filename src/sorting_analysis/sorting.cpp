#include "sorting_analysis/sorting.hpp"

#include <iostream>
#include <chrono>

Sorting::Sorting(const std::string & name)
: time(0.0), algorithm_name(name)
{
}

void Sorting::generate_data(std::vector<int> & data, int size)
{
  for (int i = 0; i < size; i++)
  {
    data.push_back(rand() % size);
  }
}

void Sorting::set_data(const std::vector<int> data_)
{
  data = data_;
}

void Sorting::print_data()
{
  for (int i = 0; i < data.size(); i++) {
    printf("%d ", data[i]);
  }

  printf("\n");
}

void Sorting::start()
{
  print_data();
  auto start = std::chrono::high_resolution_clock::now();

  sort();

  auto end = std::chrono::high_resolution_clock::now();
  
  time = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();

  print_data();
  std::cout << "Time taken by " << algorithm_name << " to sort " << data.size() << " elements: " << time << " seconds" << std::endl;
}
