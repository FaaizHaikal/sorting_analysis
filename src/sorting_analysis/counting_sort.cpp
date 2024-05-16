#include "sorting_analysis/counting_sort.hpp"

void CountingSort::sort() {
  int n = data.size();

  int max = INTMAX_MIN;

  for (int i = 0; i < n; i++) {
    max = std::max(data[i], max);
  }

  std::vector<int> count(max + 1, 0);

  for (int i = 0; i < n; i++) {
    count[data[i]]++;
  }

  for (int i = 0; i <= max; i++) {
    count[i] += count[i - 1];
  }

  std::vector<int> output(n);

  for (int i = n - 1; i >= 0; i--) {
    output[count[data[i]] - 1] = data[i];
    count[data[i]]--;
  }

  data = output;
}
