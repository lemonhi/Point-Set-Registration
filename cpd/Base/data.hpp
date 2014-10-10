#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include "Base/matrix.hpp"

namespace cpd
{
	typedef enum {EMPTY, RIGID, AFFINE, NONRIGID} RegType;

	typedef float value_type;

	template <typename T, int M>
	void getInputData(const std::string& model_file, const std::string& data_file, 
		Matrix2<T, M>& model, Matrix2<T, M>& data)
	{
		// read files and fill the model and data matrices

	}

	template <typename T, int M>
	void getInputData(const std::string& model_file, const std::string& data_file, 
		Matrix3<T, M>& model, Matrix3<T, M>& data)
	{
		// read files and fill the model and data matrices

	}
}

#endif 