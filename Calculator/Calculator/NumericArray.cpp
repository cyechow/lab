#include "NumericArray.h"
#include <algorithm>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/moment.hpp>

using namespace std;

namespace Math
{
	NumericArray::NumericArray(std::vector<double> data, bool isSequenced)
	{
		aData = data;
		bIsSequenced = isSequenced;

		aDataSorted = data;
		sort(aDataSorted.begin(), aDataSorted.end());
	}

	int NumericArray::Count()
	{
		return aData.size();
	}

	double NumericArray::Open()
	{
		return aData[0];
	}

	double NumericArray::Close()
	{
		int idx = aData.size() - 1;
		return aData[idx];
	}

	double NumericArray::Max()
	{
		return aDataSorted.back();
	}

	double NumericArray::Min()
	{
		return aDataSorted.front();
	}

	double NumericArray::MeanArith()
	{
		int N = aData.size();
		double sum = 0;
		for (int i = 0; i < N; i++)
		{
			sum += aData[i];
		}

		return sum / aData.size();
	}

	double NumericArray::MeanHar()
	{
		int N = aData.size();
		double recSum = 0;
		for (int i = 0; i < N; i++)
		{
			recSum += (1 / aData[i]);
		}

		return aData.size() / recSum;
	}
}