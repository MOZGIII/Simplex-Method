#ifndef _PLANE_H_
#define _PLANE_H_

#include "SubPlane.h"

template <class T>
class Plane : public SubPlane<T> {
public:
	/*
	 * �������� ������� �������
	*/

	double targetFunction;

	/*
	 * ��������� ������� ����������� �������
	*/

	double * thColumn;
	
	/*
	 * ������ ������� ������.
	*/		
		
	int indexOfLeavingRow;
	
	/*
	 * ������ �������� �������.
	*/
		
	int indexOfLeavingColumn;		
	
	/*
	 * ����������� �������.
	*/

	double allowingMember;

	Plane(unsigned int vars) : SubPlane<T>(vars)
	{
		thColumn = new double[vars];
		targetFunction = 0;
	}
};

#endif /* _PLANE_H_ */
