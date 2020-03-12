#include <iostream>
#include <vector>    // 👇用到了向量
#include <algorithm> // 👇用到了ostream_iterator
#include "./lib/DoubleVector.h" // 自定义Double型向量输入输出工具头文件
using namespace std;

/**
 * 冒泡法排序
 */

int main()
{
  vector<double> vList = cinDoubleVector();
  int len = vList.size();

  // 冒泡排序逻辑
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (vList[j] > vList[j + 1])
        swap(vList[j], vList[j + 1]);
    }
  }

  coutDoubleVector(vList);

  return 0;
}
