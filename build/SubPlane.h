#ifndef _SUBPLANE_H_
#define _SUBPLANE_H_

#include "Matrix.h"

template <class T>
class SubPlane {
public:
	/*
	 * ��������� ������ ����������� �������
	*/

	double * indexString;

 	/*
	 * �������� �������� ����������
	 * � �������� �������.
	*/

	matrix<T>* basisVars;

	/*
	 * ������������ ���  ����������
	 * � ��������-�������.
	*/

	matrix<T>* varsFactors;

	SubPlane(unsigned int vars)
	{
		basisVars = new matrix<T>(2, vars);
		varsFactors = new matrix<T>(vars, vars*2);
		indexString = new double[vars*2];
	}
};

#endif /* _SUBPLANE_H_ */
