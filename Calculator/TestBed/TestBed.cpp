// TestBed.cpp : Defines the entry point for the console application.
//
// Used to test the Calculator DLL

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

#include "NumericArray.h"
#include "SignalProcessor.h"
//#include <boost\assign\list_of.hpp>

using namespace std;
using namespace Math;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Testing NumericArray!" << endl;

	static const int arr[] = { 16, 2, 77, 29 };
	vector<double> vTestData(arr, arr + sizeof(arr) / sizeof(arr[0]));
	NumericArray cTestArray = NumericArray::NumericArray(vTestData, true);

	cout << "Count: " << cTestArray.Count() << endl;
	cout << "Open: " << cTestArray.Open() << endl;
	cout << "Close: " << cTestArray.Close() << endl;
	cout << "Max: " << cTestArray.Max() << endl;
	cout << "Min: " << cTestArray.Min() << endl;
	cout << "MeanArithmetic: " << cTestArray.MeanArith() << endl;
	cout << "MeanHarmonic: " << cTestArray.MeanHar() << endl;
	
	cout << "Press any key to continue..." << endl;
	getchar();

	cout << "Testing Signal Processor!" << endl;
	
	/*
	// TODO!!
	// Load in file with signal and build vector with data:
	ifstream df("");
	string line;
	vector<double> data;
	if (df.is_open())
	{
		while (getline(df, line))
		{
			data.push_back(stod(line));
		}
	}

	vector<double> acf = SignalProcessor::SignalProcessor::AutoCorr(data, 0);

	*/

	cout << "Press any key to exit..." << endl;
	getchar();
	return 0;
}

