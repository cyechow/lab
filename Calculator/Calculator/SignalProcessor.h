#ifndef SIGNALPROCESSOR_H
#define SIGNALPROCESSOR_H

#include <vector>
using namespace std;
namespace SignalProcessor
{
	class SignalProcessor
	{
	private:


	public:
		void IIRFilter(vector<double> data, vector<double> window);			// Infinite Impulse Response Filter
		static vector<double> AutoCorr(vector<double> data, int lag);

	};
}

#endif // !SIGNALPROCESSOR_H
