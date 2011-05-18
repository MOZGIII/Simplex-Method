#ifndef _SIMPLEX_H_
#define _SIMPLEX_H_ 1


#include <iostream>

#include "InputData.h"
#include "Plane.h"
#include "SubPlane.h"


/*
 * � ���� ����� ���������� �����, �������� ��������
 * �������� ��� �������� �������� �������, � �������
 * ����� ������ ����������� ����������� ���� ������.
*/

class Simplex : public InputData  {

	public:
		
		/* ������ �������
		 * ������ �������� ������ ������
		 * ��� ������� �������� �����
		*/

		void init();

		/*
		 * ������ ������� ������ �������� ���
		 * ���� ��������� �������� �����.
		 * �� ��� ���������� �������, �������
		 * ������ ���������� �������� ��� ���������
		 * ��������� �������� ����� � �������� �������.
		*/

		int setValues();

		/*
		 * ������ ������� ��������� ���������� ����
		 * �� �������������.
		*/
		
		bool checkThColumn();

		bool checkPlane();

		/*
		 * ������ ������� ������ �������� ��������
		 * ���������� � �������� �������
		*/

		void setBasisVars(int numOfIteration);

		/*
		 * ������ ������� ���������� ������� ������.
		*/

		void printOutData(int numOfIteration);

		void displayResult(int numOfIteration);		

		/*
		 * ������ ������� ������ �������� �������������
		 * ��� �������� � �������� ���������� � �������� �������.
		*/
		
		void setFactorsOfVars(int numOfIteration);

		/*
		 * ������ ������� ������ �������� ������������
		 * � ��������� ������ �������� �������.
		*/

		void setIndexString(int numOfIteration);

		/*
		 * ������ ������� ������ �������� �������
		 * ���� � �������� �������.
		*/

		void setTargetFunction(int numOfIteration);

		/*
		 * ������ ������� ������ �������� �������������
		 * ���������� ������� ����������� �������.
		*/

		void setThColumn();

		/*
		 * ������ ������� ������ �������� ������� ��������
		 * ������� �������� ����� ����������� �������.
		*/

		void setIndexOfLeavingColumn();

		/*
		 * ������ ������� ������ �������� ������� �������
		 * ������ �������� ����� ����������� �������.
		*/

		void setIndexOfLeavingRow();

		/*
		 * ������ ������� ������� ��������
		 * ������������ �������� � ���������� ���
		*/

		void setAllowingMember();

	private:
		Plane<double> *currentPlane, *bestPlane;
		SubPlane<double> *tmp;
};

/*���-�� � ����� ��������

if (error() || finished()) {
	print(best);
}
if (better(current, best)) {
	best = current;
}
*/


#endif
