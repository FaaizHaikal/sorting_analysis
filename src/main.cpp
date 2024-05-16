#include "sorting_analysis.hpp"
#include <iostream>

#define ALGORITHMS 5

int main()
{
  int size;

  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  if (size <= 0)
  {
    std::cerr << "Invalid size!" << std::endl;
    return 1;
  }

  std::vector<int> data;
  Sorting::generate_data(data, size);

  Sorting *sorter;

  for (int i = 0; i < ALGORITHMS; i++)
  {
    switch (i)
    {
      case 0:
        sorter = new InsertionSort();
        break;
      case 1:
        sorter = new MergeSort();
        break;
      case 2:
        sorter = new HeapSort();
        break;
      case 3:
        sorter = new QuickSort();
        break;
      case 4:
        sorter = new CountingSort();
        break;
    }

    sorter->set_data(data);
    sorter->start();

    delete sorter;
  }
  
  
  return 0;
}