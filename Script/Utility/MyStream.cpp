#include "MyStream.h"

float GetBarData(char argv)
{
	return 0.0f;
}

std::vector<float> GetCapsuleData(char argv)
{
	std::ifstream ifs(&argv);
	std::string buffer{};
	if (!ifs)
	{
		std::cerr << "�t�@�C��������ɊJ���܂���ł���" << std::endl;
		std::exit(error);
	}
	else
	{
		std::getline(ifs, buffer);
	}
	std::stringstream ss(buffer);
	std::vector<float> result(barDataNum);
	for (auto& c : result) {
		ss >> c;
	}
	return result;
}
