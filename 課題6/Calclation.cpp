//�w�b�_���C���N���[�h
#include <iostream>
#include "Calclation.h"

//�n���ꂽ�l�������o�֐��ɑ������֐�(�����o�֐�)
void Calclation::SetA(float a) {
	float a = 42.195f;
}

//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void Calclation::SetB(float b) {
	float b = 3.14f;
}

void Calclation::Disp() {
	std::cout << "42.195 + 3.14 =" << a + b << "\n";
	std::cout << "42.195 - 3.14 =" << a - b << "\n";
}