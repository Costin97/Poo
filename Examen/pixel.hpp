#include <iostream>
#include <cstring>
#include <fstream>

class pixel{
	int val;
	public:
		pixel(int val=-1);
		pixel(const pixel&);
		int getVal() const;
};
