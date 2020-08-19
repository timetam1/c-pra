#include "car.h"
#include <iostream>
//
using namespace std;
//  コンストラクタ
CCar::CCar():fuel(0),migration(0){
  cout << "CCarオブジェクト生成" << endl;
}
//  デストラクタ
CCar::~CCar(){
    cout << "CCarオブジェクト破棄" << endl;
}
void CCar::move(){
    cout << "移動距離:" << migration << endl;
    cout << "燃料" << fuel << endl;
}
//  燃料補給メソッド
void CCar::supply(int fuel){
    
    cout << "燃料" << fuel << endl;
  }
