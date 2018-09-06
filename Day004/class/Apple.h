#pragma once
#include <string>

//캡슐화 : 클래스를 이용해서 내부 로직은 모르지만 필요한 부분을 사용할 수 있음
//은닉화 : 중요 정보를 private로 숨겨서(hiding) 처리할 수 있음
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