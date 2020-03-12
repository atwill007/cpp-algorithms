#include <iostream>
#include <vector>
#include <algorithm>
#include "./lib/DoubleVector.h"
using namespace std;

/**
 * 选择排序
 */

int main()
{
  vector<double> list = cinDoubleVector();

  vector<double> selectionSort(vector<double>);
  selectionSort(list);

  coutDoubleVector(list);

  return 0;
}

vector<double> selectionSort(vector<double> list)
{
  int len = list.size();
  if (len <= 1)
    return list;
  for (int i = 0; i < len - 1; i++)
  {
    int minIdx = i;
    for (int j = 0; j < len; j++)
    {
      if (list[j] < list[minIdx])
        minIdx = j;
    }
    swap(list[i], list[minIdx]);
  }

  return list;
}
