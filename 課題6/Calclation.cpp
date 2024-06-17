//ヘッダをインクルード
#include <iostream>
#include "Calclation.h"

//渡された値をメンバ関数に代入する関数(メンバ関数)
void Calclation::SetA(float a) {
	float a = 42.195f;
}

//メンバ変数の内容を出力するメンバ関数
void Calclation::SetB(float b) {
	float b = 3.14f;
}

void Calclation::Disp() {
	std::cout << "42.195 + 3.14 =" << a + b << "\n";
	std::cout << "42.195 - 3.14 =" << a - b << "\n";
}