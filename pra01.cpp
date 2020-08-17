#include <iostream>
//#include "sample.h"
#include "sample.cpp"

using namespace std;

int main()
{
  CSample obj;  // CSampleをインスタンス化
  int num;
  cout << "整数を入力して下さい:" << endl;
  cin >> num;
  obj.set(num);
  cout << obj.get() << endl;
  return 0;
}
