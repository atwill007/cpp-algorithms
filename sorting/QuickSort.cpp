#include <iostream>
#include <vector>
using namespace std;

/**
 * 快速排序
 *
 * 整个排序过程只需要三步：
 *　　（1）在数据集之中，选择一个元素作为"基准"（pivot）。
 *　  （2）所有小于"基准"的元素，都移到"基准"的左边；所有大于"基准"的元素，都移到"基准"的右边。
 *　　（3）对"基准"左边和右边的两个子集，不断重复第一步和第二步，直到所有子
 * 参考链接: https://www.ruanyifeng.com/blog/2011/04/quicksort_in_javascript.html
 */

vector<double> cinDobuleVector();

int main()
{
  vector<double> vList = cinDobuleVector();

  vector<double> quickSort(vector<double>);
  vector<double> sortV = quickSort(vList);

  cout << "排序后的数组为: "
       << endl;
  copy(sortV.begin(), sortV.end(), ostream_iterator<double>(cout, "\n")); // 向量包含的元素

  return 0;
}

vector<double> quickSort (vector<double> vList) {
  if (vList.size() <= 1) return vList;
  double pivot = vList[0]; // 取第一个元素作为参考
  vector<double> leftV;
  vector<double> rightV;
  for(int i = 1; i < vList.size(); i++) {
    cout << "for " << i << endl;
    if (vList[i] < pivot)
      // cout << "qs: " << leftV[leftV.size()] << endl;
      // leftV[leftV.size()] = vList[i];
      leftV.insert(leftV.end(), vList[i]);
    else
      rightV.insert(rightV.end(), vList[i]);
  }
  vector<double> newV;
  leftV = quickSort(leftV);
  rightV = quickSort(rightV);
  newV.insert(newV.begin(), leftV.begin(), leftV.end());
  newV.insert(newV.end(), pivot);
  newV.insert(newV.end(), rightV.begin(), rightV.end());
  return newV;
}

vector<double> cinDobuleVector () {
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
