#include <iostream>
#include <string>
#include <array>
#include <vector>

template <typename T , int size>
T scalerProduct(std::array<T, size> tVectorOne, std::array<T, size> tVectorTwo)
{
	T result = ((tVectorOne[0] * tVectorTwo[0]) + (tVectorOne[1] * tVectorTwo[1]) + (tVectorOne[2] * tVectorTwo[2]));

	return result;
}

int main()
{
	std::array<int, 3> vectorOne = { 1, 2, 3 };
	std::array<int, 3> vectorTwo = { 4, 5, 6 };

	std::cout << "" + std::to_string(scalerProduct(vectorOne, vectorTwo)) << std::endl;

	system("pause");
}
