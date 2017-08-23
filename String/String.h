#include<iostream>
using namespace std;
#ifndef String_h
#define String_h
class strings
{
private:
	char *str;
	int length;
public:
	strings();
	strings(const strings &s0);
	friend istream& operator>> (istream &in, strings &s1);
	friend strings& operator<< (ostream &out, strings &s2);
	strings &operator= (const strings &s3);
	strings operator+ (const strings &s4);
	bool operator== (const strings &s5)  const;
};
#endif