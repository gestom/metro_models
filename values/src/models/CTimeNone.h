#ifndef CTIMENONE_H
#define CTIMENONE_H

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include "CTimer.h"
#include "CTemporal.h"

#define MAX_ID_LENGTH 100
	
using namespace std;

class CTimeNone: public CTemporal
{
	public:
		CTimeNone(int idd);
		~CTimeNone();

		void init(int iMaxPeriod,int elements,int numClasses);

		//adds a serie of measurements to the data
		int add(uint32_t time,float state);

		float estimate(uint32_t time);

		float predict(uint32_t time);

		void update(int maxOrder,unsigned int* times = NULL,float* signal = NULL,int length = 0);
		void print(bool verbose=true);

		int save(const char* name,bool lossy = false);
		int load(const char* name);

	private:
		int id;
		int exportToArray(double* array,int maxLen);
		int importFromArray(double* array,int len);
		int save(FILE* file,bool lossy = false);
		int load(FILE* file);

		float estimation;

};

#endif
