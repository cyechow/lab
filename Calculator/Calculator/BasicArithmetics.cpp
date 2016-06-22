#include "BasicArithmetics.h"

namespace Math
{
	double BasicArithmetics::Add(double A, double B)
	{
		return A + B;
	}

	double BasicArithmetics::Subtract(double A, double B)
	{
		return A - B;
	}

	double BasicArithmetics::Multiply(double A, double B)
	{
		return A*B;
	}

	double BasicArithmetics::Divide(double A, double B)
	{
		if (B == 0)
			return 0;

		return A / B;
	}
}