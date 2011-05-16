#ifndef _SUBPLANE_HH_
#define _SUBPLANE_HH_

#include "Matrix.hh"

template <class T>
class SubPlane {
public:
	/*
	 * Индексная строка симплексной таблицы
	*/

	double * indexString;

 	/*
	 * Значения базисных переменных
	 * в симплекс теблице.
	*/

	matrix<T>* basisVars;

	/*
	 * Коэффициенты при  переменных
	 * в симплекс-таблице.
	*/

	matrix<T>* varsFactors;

	SubPlane(unsigned int vars)
	{
		basisVars = new matrix<T>(2, vars);
		varsFactors = new matrix<T>(vars, vars*2);
		indexString = new double[vars*2];
	}
};

#endif /* _SUBPLANE_HH_ */
