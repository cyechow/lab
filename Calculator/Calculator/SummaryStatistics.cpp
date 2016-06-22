#include "SummaryStatistics.h"
#include <boost\accumulators\statistics\stats.hpp>
#include <cmath>

namespace Math
{
	double SummaryStatistics::getMeanArithmetic(vector<double> data)
	{
		int N = data.size();
		double sum = 0;

		return sum / N;
	}

	double SummaryStatistics::getVariance(vector<double> data, bool isSample)
	{
		int N = data.size();
		
		double avg = SummaryStatistics::getMeanArithmetic(data);
		double sumsq = 0;

		for (int i = 0; i < N; i++)
		{
			sumsq += pow(data[i] - avg, 2);
		}

		if (isSample)
			return sumsq / (N - 1);
		else
			return sumsq / N;
	}
}