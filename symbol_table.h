#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <iostream>
#include <unordered_map>
#include <string>

#include "symbol.h"
#include "symbol.cpp"
#include "gpl_type.h"

using namespace std;

class Symbol_table
{
	public:
		static Symbol_table *instance();
		void print(ostream &os);
	private:
		static Symbol_table *m_instance;
		int m_id;
		unordered_map <string, Symbol*> map;

		Symbol* lookup(string);

		Symbol_table() {};

		Symbol_table(const Symbol_table &);
		const Symbol_table &operator=(const Symbol_table &);

};

#endif