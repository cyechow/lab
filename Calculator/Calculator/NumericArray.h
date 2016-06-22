#ifndef NUMERICARRAY
#define NUMERICARRAY

#include <vector>

namespace Math
{
	class NumericArray
	{
	private:
		std::vector<double>							aData;
		std::vector<double>							aDataSorted;
		bool										bIsSequenced;

		//int											iCount;
		//double										dMeanArith;
		//double										dMeanGeo;
		//double										dMeanHar;
		//double										dModeValue;
		//double										dModeCount;

	public:
		NumericArray(std::vector<double> data, bool isSequenced);

		int Count();

		double Open();
		double Close();

		double Min();
		double Max();

		double MeanArith();
		//double MeanGeo();
		double MeanHar();

		//double* Mode();

		//double* Filter(double filtWin[]);
	};
}

#endif // !NUMERICARRAY
