#include <iostream>
#include <string>

class Figure {
protected:
	std::string name = "������";
	int sides_count = 0;

public:
	Figure(std::string name, int sides_count) {
		this->name = name;
		this->sides_count = sides_count;
	}

	Figure() { sides_count = 0; }

	std::string get_name() { return name; }

	int get_sides_count() // ��������� ����� get_sides_count � ������ Figure
	{
		return sides_count;
	}
};

class Triangle : public Figure {
public:
	Triangle() {
		name = "�����������";
		sides_count = 3;
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() {
		name = "��������������";
		sides_count = 4;
	}
};

int main() {

	setlocale(0, "");
	Figure fig;
	Triangle tri;
	Quadrangle quad;
	std::cout << fig.get_name() << ": " << fig.get_sides_count() << std::endl;
	std::cout << tri.get_name() << ": " << tri.get_sides_count() << std::endl;
	std::cout << quad.get_name() << ": " << quad.get_sides_count() << std::endl;
}


/*
	������ 1. ������.���������� ������
	� ���� ������� �� ��������� ������ ������� �������� ������� ��� �������� ���������� �������.

	���������� ������� �������� ��������� ������� : ���� �������� ������.������ ������ ���� ����� : ����������� � ��������������.� ������ ���� ���������� ������.��� ����������� ������ ����� ������� ��� ���������� ������ ����.� ������������ ��� �������, � ��������������� ������ �������.� ����� ������ �� ����� �������� ���������� � ������, �� �� �� ������ ���� �������� �������� ���������� ������ ��� �������� ������ �����.

	������ : �������������� � ����������� ������, ����������� ���������� �������.����������������� �� ������ : �������� �� ������ ���������� ������� ������ � �������� ���������� � ���������� ��� ������ �� �������.

	������ ������ ���������
	�������
	���������� ������ :
	������: 0
	����������� : 3
	�������������� : 4
*/

/*
	��� ����� ������� ��� ������ : ��� ������, ������������ � ���������������.������ �� Figure, Triangle � Quadrangle.

	������ Triangle � Quadrangle ����� ����������� ����� Figure.

	��� �������� ���������� � ���������� ������ �������� ���� sides_count � ������ Figure.��� ����� ����������, ����� ������ ���� �������� ��� �����, �� ����� �������� �������� � �����������.���� ��� ����� ���� ���������, � ����� ��� ����� ���������� ���������� � ���������� ������ ����� �����������.

	��� ������� � ���������� � ���������� ������ �������� ��������� ����� get_sides_count � ������ Figure.�� ����� ����������� ������ ��������.

	��� ���������� ������������� ���������� � ���������� ������ �������� ������������ � �������, � ������� ��������� ������ �������� ���� sides_count.���� �� ������� sides_count ����������, ������ ��������� �������� ����� � ������������.���� ���������, �� ����� ������� � ������ Figure ���������� ����������� � ����������(���������� ������) � ��������� ����������� ��� ����������, ������� ����� �������� ���� ���������� ����������� � ����������.���������� ����������� ������ ����� �������� �������� ������ � ����� ��������� ������������� ��� ����������.

	����� ��� �������� ������ �������� ������ ����� ������� ���������� ���� name � ������ Figure � ��������������� ������� get_name � ����������� �������� � ������ ������.� Figure ��� ����� ������� � �.�.
*/