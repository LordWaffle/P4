#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

#include "gpl_type.h"

using namespace std;

class Symbol
{
public:
	Symbol(){};
	string name;
	void* value = (void *) new int;
	Gpl_type type;

private:

};

#endif