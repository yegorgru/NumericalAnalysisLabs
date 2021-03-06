#pragma once

#include "Polynomial.h"

namespace NumericalAnalysis
{

	class ApproximatingPolynomials
	{
	public:
		static Polynomial NewtonPolynomial(const Polynomial& function, int nodes, bool debug);
		static Polynomial DegreePolynomial(const Polynomial& function, int nodes, bool debug);
	};

}
