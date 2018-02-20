#include "symbol_table.h"

Symbol_table *Symbol_table::m_instance = 0;

Symbol_table* Symbol_table::instance()
{
	if(m_instance == 0)
	{
		m_instance = new Symbol_table();
	}
	return m_instance;
}

Symbol* Symbol_table::lookup(string name)
{
	unordered_map<string, Symbol*>::const_iterator got = map.find(name);
	if(got == map.end())
	{
		cout << name << "was not found in the symbol table" << endl;
	}
	else
	{
		cout << got->first << " contains a value of " << got->second->value << " (" << gpl_type_to_string(got->second->type) << ")" << endl;
	}
	return got->second;
}

void Symbol_table::print(ostream &os)
{
	
}