#pragma once
#include <string>

//ĸ��ȭ : Ŭ������ �̿��ؼ� ���� ������ ������ �ʿ��� �κ��� ����� �� ����
//����ȭ : �߿� ������ private�� ���ܼ�(hiding) ó���� �� ����
namespace juno
{
	class Apple
	{
	public:
		Apple();
		~Apple();

		void EatBy();
		void Calculate();
		inline int GetPrice() {return price;}

		std::string Color;
		float weight;
		std::string taste;
		int quality;
		int calorie;

	private:
		int price;
	};
}