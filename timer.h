/*	Zakaria Soliman ID:5816734
*		Assignment 1
*/

#pragma once
#include <windows.h>

class timer
{
public:
	timer(void);
	void StartTimer(void);
	double GetTime(void);

private:
	LARGE_INTEGER Lint;
	double freq;
	long long start_time;
};