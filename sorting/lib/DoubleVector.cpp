#include <iostream>
#include <vector>

using namespace std;

vector<double> cinDoubleVector () {
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

  return vList;
}

int coutDoubleVector (vector<double> sortV) {
  cout << "排序后的数组为: "
       << endl;
  copy(sortV.begin(), sortV.end(), ostream_iterator<double>(cout, "\n")); // 向量包含的元素
  return 0;
}

