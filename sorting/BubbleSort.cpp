#include <iostream>
#include <vector>    // 👇用到了向量
#include <algorithm> // 👇用到了ostream_iterator
using namespace std;

/**
 * 冒泡法排序
 */

int main()
{
  vector<double> vList; // 声明排序向量vList

  int len; // 声明数组长度len
  cout << "请输入数组长度: "
       << endl;
  cin >> len;
  cout << "您输入的数组长度为: "
       << len
       << endl;

  // 定义临时变量用于输入
  double number;
  for (int i = 0; i < len; i++)
  {
    cout << "请输入数组第" << i + 1 << "个元素的值: " << endl;
    cin >> number;
    vList.push_back(number);
  }

  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (vList[j] > vList[j + 1])
        swap(vList[j], vList[j + 1]);
    }
  }

  cout << "排序后的数组为: "
       << endl;
  copy(vList.begin(), vList.end(), ostream_iterator<int>(cout, "\n")); // 向量包含的元素
  cout << endl;

  return 0;
}
