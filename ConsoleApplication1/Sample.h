#pragma once
class Sample {
	int a;
	int b;
public:
	//constructor �R���X�g���N�^
	/*�߂�l����*/Sample(int a, int b) noexcept;
	void print() const;
	void clear() noexcept;
};
//C����̍\���̂�
//�f�[�^�����o����
//C++�̍\���̂�
//�֐����܂߂邱�Ƃ��o����
//�^���܂߂邱�Ƃ��o����
struct Sample2 {
	//�����o�ϐ��i�f�[�^�����o�j
	int a;
	int b;
	//const �����o�֐�
	void print() const;//�ł��邾�� const �����o�𑝂₷
	//�� const �����o�֐�
	void clear();
};
