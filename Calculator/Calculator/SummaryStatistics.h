#ifndef SUMMARYSTATISTICS_H
#define SUMMARYSTATISTICS_H

#include <vector>
using namespace std;
namespace Math
{
	class SummaryStatistics
	{
	private:

	public:
		//int getCount(double data[]);
		static double getMeanArithmetic(vector<double> data);
		//double getMeanGeometric(double data[]);
		//double getMeanHarmonic(double data[]);
		//double getModes(double data[]);

		static double getVariance(vector<double> data, bool isSample);
	};
}

#endif // !SUMMARYSTATISTICS_H