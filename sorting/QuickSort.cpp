#include <iostream>
#include <vector>
#include "./lib/DoubleVector.h"

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

int main()
{
  vector<double> vList = cinDoubleVector();

  vector<double> quickSort(vector<double>);
  vector<double> sortV = quickSort(vList);

  coutDoubleVector(sortV);

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

