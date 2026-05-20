#include "Publisher.h"

#include <iostream>

using namespace std;

void Publisher::Send(int frequency)
{
	cout << "frequency : " << frequency << endl;
}

void Publisher::Send(const char* messege)
{
	cout << "Messege : " << messege << endl;
}

void Publisher::Send(const char* messege, int frequency)
{
	cout << "Messege : " << messege << frequency << endl;
}

