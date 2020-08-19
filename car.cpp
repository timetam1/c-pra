#include "car.h"
#include <iostream>
//
using namespace std;
//  コンストラクタ
CCar::CCar():fuel(0){
  cout << "CCarオブジェクト生成" << endl;
}
//  デストラクタ
CCar::~CCar(){
    cout << "CCarオブジェクト破棄" << endl;
}
void CCar::supply(int fuel){
    cout << "燃料" << fuel << endl;
  }
