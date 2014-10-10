#ifndef EM_HPP
#define EM_HPP

#include "Base/matrix.h"

namespace cpd
{
	class EM
	{
	public:
		EM();
		~EM();
		
		void initialization();
		void expectation();
		void maximization();
		bool convergence();

	private:

	};
}

#endif