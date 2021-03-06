#pragma once

#include <map>
#include <vector>
#include <iostream>

#include "Polynomial.h"

namespace NumericalAnalysis
{
	using Iterations = std::vector<Point>;

	class Math
	{
	public:
		static Iterations Relaxation(Polynomial polynomial, double precision, Interval interval);
		static Iterations Newton(Polynomial polynomial, double precision, Interval interval);
		static Iterations Secant(Polynomial polynomial, double precision, Interval interval);
		static Iterations ModifiedNewton(Polynomial polynomial, double precision, Interval interval);
	};
}
