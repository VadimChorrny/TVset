#include <iostream>
#include "TV.h"

using std::cout;
using std::endl;

int main()
{
	TV tv(500); // max chanel
	tv.power();
	tv.incVolume();
	tv.print();
	return 0;
}