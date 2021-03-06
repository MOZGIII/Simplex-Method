/*
 * Этот заголовочный файл содержит
 * Класс InputData, который отвечает
 * за ввод пользовательских данных.
 * Этот класс содержит объекты, хранящие
 * в себе исходные данные задачи, такие как
 * Функция цели и система неравенств.
*/

#ifndef _SOURCE_DATA_H_
#define _SOURCE_DATA_H_ 1

#include "Matrix.h"

class InputData {

	public:
	void get_data_from_user();

		/*
		 * Данная функция запрашивает у пользователя
		 * значения свободных членов системы и, после того,
		 * как пользователь ввел необходимые данные, 
		 * присваивает эти значения закрытому члену класса
		 * freeMembersOsSystem, который является указателем
		 * типа double/
		*/

		void setFreeMembersOfSystem ();

		/*
		 * Данная функция запрашивает у пользователя
		 * значения коэффициентов при переменных
		 * в системе ограничений задачи, и, после ввода
		 * данных, присваивает эти значения закрытому члену
		 * класса factorsOfSystemVars, который является указателем
		 * типа double/
		*/

		void setFactorsOfSystemVars();

		/*
		 * Данная функция запрашивает у пользователя
		 * значения коэффициентов при переменных целевой
		 * функции, и, после ввода присваивает эти значения
		 * Закрытому члену класса factorsOfTargetFunctionVars,
		 * который является указателем типа double/
		*/

		void setFactorsOfTargetFunctionVars();

		/*
		 * Данная фукнция принимает количество
		 * основных переменных задачи, введенное 
		 * пользователем с клавиатуры 
		 * и возвращает это значение.
		*/

		void getNumOfSourceVars();

		/*
		 * Данная функция задает закрытому члену класса
		 * NumOfSourceVars (Количество основных переменных
		 * задачи) Значение, которая возвращает функция
		 * getNumOfSourceVars()/
		*/

		void setNumOfSourceVars();

		/*
		 * Данная функция принимает значение
		 * направления целевой функции поставленной
		 * задачи, проверяет его на корректность, если
		 * все верно, то присваивает это значение 
		 * закрытому члену класса wayOfTargetFunctions.
		*/
		
		void setWayOfTargetFunction();

	protected:

		void alloc_memory(unsigned int);

       /*
	    *  Коэффициенты переменных
	    *  целевой функции
	    */

		double * factorsOfTargetFunctionVars;
		
		/*
		 * Коэффициенты переменных при
		 * системе неравенств
		*/

		matrix* factorsOfSystemVars;

		/*
		 * Значения свободных членов
		 * про системе неравенств
		*/

		double * freeMembersOfSystem;

		/*
		 * Направление целевой функции
		 * (минимум/максимум).
		*/

		bool wayOfTargetFunction;

		/*
		 * Количество исходных переменных
		 * целевой функции и системы неравенств
		*/

		int numOfSourceVars; 
};
#endif
