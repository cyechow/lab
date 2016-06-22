#include "SignalProcessor.h"
#include "SummaryStatistics.h"

#include <stdlib.h>
#include <cstdlib>
#include <array>
#include <vector>

using namespace std;
namespace SignalProcessor
{
	// UNTESTED CODE
	vector<double> SignalProcessor::AutoCorr(vector<double> data, int lag)
	{
		vector<double> acf;

		int N = data.size();
		if (N == 0) return acf;

		if (N < lag || lag < 0)
			lag = N-1;

		double var = Math::SummaryStatistics::getVariance(data, true);
		// We're shifting the signal one sample at a time over itself
		// and finding the sum of the areas (crossSum) under the curve.
		for (int i = 0; i < lag; i++)
		{
			vector<double> vBase(data.begin() + i, data.end());
			vector<double> vShifted(data.begin(), data.end() - i);

			if (vBase.size() == vShifted.size())
			{
				double crossSum = 0;
				for (int j = 0; j < vBase.size(); j++)
				{
					crossSum += vBase[j] * vShifted[j];
				}

				acf.push_back(crossSum / var);
			}
		}

		return acf;
	}
}