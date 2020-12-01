#pragma once
#include "TV.h"
class Remote
{
public:
	Remote(TV* tv)
		:tv(tv)
	{}
	void power();
	Remote& operator ++ ();
	Remote& operator -- ();
	void incVolume();
	void decVolume();
	void goToChannel(const int& channel);				

private:
	TV* tv;


};

